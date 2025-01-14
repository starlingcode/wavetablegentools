import struct
import math
import numpy as np
from viatools.via_resource import ViaResource, ViaResourceSet


class Sync3Scale(ViaResource):

    def load(self, json_path):
        if not super().load(json_path):
            return False
        self.sorted = True
        if 'sorted' in self.data:
            if self.data['sorted'] is False:
                self.sorted = False
        self.sort()
        return True

    # reciple: [numerator, denominator]
    def add_data(self, recipe, idx=None):
        if idx:
            self.data['seed_ratios'].insert(idx, recipe)
            self.sort()
        else:
            self.data['seed_ratios'].append(recipe)
            insert_idx = self.sort(recipe)
            self.reorder_data(len(self.data['seed_ratios']) - 1, insert_idx)
            return insert_idx

    def reorder_data(self, idx_to_move, destination):
        self.data['seed_ratios'].insert(destination, self.data['seed_ratios'].pop(idx_to_move))
        self.sort()

    def remove_data(self, index):
        removed_idx = self.data['seed_ratios'].pop(index)
        self.sort()
        return removed_idx

    def clear_data(self):
        old_data = self.data['seed_ratios']
        self.data['seed_ratios'] = [[1,1]]
        self.sort()
        return old_data

    def reload_data(self, data_copy):
        self.data['seed_ratios'] = []
        for ratio in data_copy:
            self.data['seed_ratios'].append(ratio)
        self.sort()

    def get_data(self):
        data = []
        for ratio in self.data['sorted_ratios']:
            data.append(ratio)
        return data

    def update_sorted(self, is_sorted):
        self.data['sorted'] = is_sorted
        self.sorted = is_sorted
        old_order = []
        for ratio in self.data['seed_ratios']:
            old_order.append(ratio)
        self.sort()
        return old_order

    def check_fill_ok(self):
        scale_size = 32
        seed_ratios = self.data['seed_ratios']
        lt_1 = []
        gt_1 = []
        for ratio in seed_ratios:
            if ratio[0]/ratio[1] < 1:
                lt_1.append(ratio)
            elif ratio[0]/ratio[1] > 1:
                gt_1.append(ratio)
        if len(lt_1) > scale_size/4 or len(gt_1) > scale_size/4:
            return False
        else:
            return True

    def set_fill(self, fill):
        self.data['fill_method'] = fill

    def get_fill(self):
        return self.data['fill_method']

    def bake(self):
        self.baked = self.expand_scale(self.data)

    def sort(self, recipe=None):
        self.data['sorted_ratios'] = []
        for ratio in self.data['seed_ratios']:
            self.data['sorted_ratios'].append(ratio)
        if self.sorted:
            self.data['sorted_ratios'].sort(key=self.get_decimal)
        if recipe:
            return self.data['sorted_ratios'].index(recipe)
    
    def get_decimal(self, ratio):
        return ratio[0]/ratio[1]

    def expand_scale(self, recipe):

        self.scale_size = 32

        ratios = recipe['sorted_ratios']
        mode = recipe['fill_method']

        baked = {}

        self.expand_modes = {
                        'octave': self.expand_octave,
                        'tritave': self.expand_tritave,
                        'expand': self.expand
                    }    

        self.expand_method = self.expand_even

        expanded = self.expand_modes[mode](ratios)
        numerators = [ratio[0] for ratio in expanded]
        denominators = [ratio[1] for ratio in expanded]

        precalcs = []
        for index, denominator in enumerate(denominators):
            precalc = int((2 ** 32) / denominator) % 4294967296
            precalcs.append(precalc)

        ratios_used = set()
        keys = []
        key = 0
        for index, numerator in enumerate(numerators):
            ratio = (numerator, denominators[index])
            if ratio not in ratios_used:
                ratios_used.add(ratio)
                key += 1
            keys.append(key)

        baked['numerators'] = numerators
        baked['denominators'] = denominators
        baked['precalcs'] = precalcs
        baked['keys'] = keys
        return baked

    def expand(self, ratios):
        return self.expand_method(ratios, self.scale_size)

    def expand_octave(self, ratios):
        return self.expand_tiled(ratios, 2)

    def expand_tritave(self, ratios):
        return self.expand_tiled(ratios, 3)

    def get_log(self, ratio, tile_size):
        return math.log(ratio[0]/ratio[1], tile_size)

    def expand_tiled(self, ratios, tile_size):
        gt_1 = []
        lt_1 = []
        for ratio in ratios:
            dec = self.get_decimal(ratio)
            if dec < 1:
                lt_1.append(ratio)
            elif dec > 1:
                gt_1.append(ratio)
        if lt_1 == []:
            gt_1.insert(0, [1,1])
            top = self.get_log(gt_1[-1], tile_size)
            if top.is_integer():
                top -= 1
            log_range = int(math.trunc(top + 1))
            knob_high = self.expand_method(gt_1, self.scale_size/4)
            cv_high = self.transpose_ratios(knob_high, [tile_size**log_range, 1])
            knob_low = self.transpose_ratios(knob_high, [1, tile_size**log_range])
            cv_low = self.transpose_ratios(knob_high, [1, tile_size**(log_range*2)])
        elif gt_1 == []:
            lt_1.append([1,1])
            bottom = self.get_log(lt_1[0], tile_size)
            if bottom.is_integer():
                bottom += 1
            log_range = abs(int(math.trunc(bottom - 1)))
            knob_low = self.expand_method(lt_1, self.scale_size/4)
            cv_low = self.transpose_ratios(knob_low, [1, tile_size**log_range])
            knob_high = self.transpose_ratios(knob_low, [tile_size**log_range, 1])
            cv_high = self.transpose_ratios(knob_low, [tile_size**(log_range*2), 1])
        else:
            gt_1.insert(0, [1,1])
            top = self.get_log(gt_1[-1], tile_size)
            if top.is_integer():
                top -= 1
            top_log_range = int(math.trunc(top + 1))
            lt_1.append([1,1])
            bottom = self.get_log(lt_1[0], tile_size)
            if bottom.is_integer():
                bottom += 1
            bottom_log_range = abs(int(math.trunc(bottom - 1)))
            knob_high = self.expand_method(gt_1, self.scale_size/4)
            cv_low = self.transpose_ratios(knob_high, [1, tile_size**(top_log_range + bottom_log_range)])
            knob_low = self.expand_method(lt_1, self.scale_size/4)
            cv_high = self.transpose_ratios(knob_low, [tile_size**(top_log_range + bottom_log_range), 1])
        
        return  cv_low + knob_low + knob_high + cv_high

    def transpose_ratios(self, ratios, factor):
        out = []
        for ratio in ratios:
            num = ratio[0] * factor[0]
            den = ratio[1] * factor[1]
            gcd = np.gcd(num, den)
            out.append([int(num/gcd), int(den/gcd)])
        return out

    def expand_log(self, ratios, out_size):
        logs = []
        for ratio in ratios:
            logs.append(self.get_log(ratio, 2))
        min_log = logs[0] 
        max_log = logs[-1]
        out_map = np.linspace(min_log, max_log, int(out_size))
        out = []        
        ratio_to_add = 0
        for notch in out_map:
            if notch > logs[ratio_to_add]:
                ratio_to_add += 1
            out.append(ratios[ratio_to_add])
        return out

    def expand_even(self, ratios, out_size):
        relative_indices = []
        for idx in range(0, len(ratios)):
            rel = idx * (out_size/len(ratios))
            rel += (out_size - 1) - (len(ratios) - 1) * (out_size/len(ratios))
            relative_indices.append(rel)
        out = []        
        ratio_to_add = 0
        for notch in range(0, int(out_size)):
            out.append(ratios[ratio_to_add])
            if notch >= relative_indices[ratio_to_add]:
                ratio_to_add += 1
        return out
            
class Sync3ScaleSet(ViaResourceSet):

    def __init__(self, resource_dir, slug):
        super().__init__(Sync3Scale, slug, resource_dir, resource_dir + 'scales/')
        self.output_dir = resource_dir + 'binaries/'            
        self.scale_size = 32
        self.slug = slug

    def bake(self):
        for resource in self.resources:
            resource.bake()

    def pack_binary(self, write_dir=None, title=None):
        if not title:
            title=self.slug
        if not write_dir:
            write_dir = self.output_dir
        sz = self.scale_size
        packer = struct.Struct('<%dI%dI%dI%dII' % (sz, sz, sz, sz))
        compiled_structs = []
        for resource in self.resources:
            resource.bake()
            scale = resource.baked
            pack = []
            for number in scale['numerators']:
                pack.append(number)
            for number in scale['denominators']:
                pack.append(number)
            for number in scale['precalcs']:
                pack.append(number) 
            for number in scale['keys']:
                pack.append(number)
            pack.append(0)
            compiled_structs.append(packer.pack(*pack))

        resource_path = write_dir + title + '.sync3'

        with open(resource_path, 'wb') as outfile:
            for chunk in compiled_structs:
                outfile.write(chunk)

        return resource_path
