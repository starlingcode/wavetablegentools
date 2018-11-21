/*
 * tables.h
 *
 *  Created on: Aug 18, 2018
 *      Author: willmitchell
 */

#ifndef INC_TABLES_H_
#define INC_TABLES_H_

#include <sample_data.hpp>

#ifdef __cplusplus
extern "C" {
#endif


//
typedef struct {
	const uint16_t **attackSlope;
	const uint16_t **releaseSlope;
	uint32_t slopeLength;
	uint32_t numWaveforms;
} Wavetable;

#ifdef __cplusplus
}
#endif

// helper function to load the above array

void loadTable(Wavetable * family);

/*
 *
 * Assign tables of slopes
 *
 */

static const uint16_t *allLinear[5] = {allLinear_Samples, allLinear_Samples, allLinear_Samples,
		allLinear_Samples, allLinear_Samples};

static const uint16_t *allExpo[5] = {sharpExpo, sharpExpo, sharpExpo,
		sharpExpo, sharpExpo};

static const uint16_t *impshort_5[9] = { impshort0, impshort1, impshort2,
		impshort3, impshort4};



static const uint16_t *sawBendAttackFamily[5] = {
	sawBendAttackFamily0, sawBendAttackFamily1, sawBendAttackFamily2, sawBendAttackFamily3, sawBendAttackFamily4};


static const uint16_t *csound_formants_attack[9] = {
	csound_formants_attack0, csound_formants_attack1, csound_formants_attack2, csound_formants_attack3, csound_formants_attack4, csound_formants_attack5, csound_formants_attack6, csound_formants_attack7,
	csound_formants_attack8};


static const uint16_t *additive_tri_to_pulseFamily[5] = {
	additive_tri_to_pulseFamily0, additive_tri_to_pulseFamily1, additive_tri_to_pulseFamily2, additive_tri_to_pulseFamily3, additive_tri_to_pulseFamily4};


static const uint16_t *vox_release[9] = {
	vox_release0, vox_release1, vox_release2, vox_release3, vox_release4, vox_release5, vox_release6, vox_release7,
	vox_release8};


static const uint16_t *testRMSRMSRls[5] = {
	testRMSRMSRls0, testRMSRMSRls1, testRMSRMSRls2, testRMSRMSRls3, testRMSRMSRls4};


static const uint16_t *soprano257Rls[5] = {
	soprano257Rls0, soprano257Rls1, soprano257Rls2, soprano257Rls3, soprano257Rls4};


static const uint16_t *trioddAttackFamily[9] = {
	trioddAttackFamily0, trioddAttackFamily1, trioddAttackFamily2, trioddAttackFamily3, trioddAttackFamily4, trioddAttackFamily5, trioddAttackFamily6, trioddAttackFamily7,
	trioddAttackFamily8};


static const uint16_t *test_fm_release[5] = {
	test_fm_release0, test_fm_release1, test_fm_release2, test_fm_release3, test_fm_release4};


static const uint16_t *tenor257Atk[5] = {
	tenor257Atk0, tenor257Atk1, tenor257Atk2, tenor257Atk3, tenor257Atk4};


static const uint16_t *vox_attack[9] = {
	vox_attack0, vox_attack1, vox_attack2, vox_attack3, vox_attack4, vox_attack5, vox_attack6, vox_attack7,
	vox_attack8};


static const uint16_t *tenor257Rls[5] = {
	tenor257Rls0, tenor257Rls1, tenor257Rls2, tenor257Rls3, tenor257Rls4};


static const uint16_t *moogSquareShiftReleaseFamily[9] = {
	moogSquareShiftReleaseFamily0, moogSquareShiftReleaseFamily1, moogSquareShiftReleaseFamily2, moogSquareShiftReleaseFamily3, moogSquareShiftReleaseFamily4, moogSquareShiftReleaseFamily5, moogSquareShiftReleaseFamily6, moogSquareShiftReleaseFamily7,
	moogSquareShiftReleaseFamily8};


static const uint16_t *bounce_257_slopes[5] = {
	bounce_257_slopes0, bounce_257_slopes1, bounce_257_slopes2, bounce_257_slopes3, bounce_257_slopes4};


static const uint16_t *trains_attack[9] = {
	trains_attack0, trains_attack1, trains_attack2, trains_attack3, trains_attack4, trains_attack5, trains_attack6, trains_attack7,
	trains_attack8};


static const uint16_t *soprano257Atk[5] = {
	soprano257Atk0, soprano257Atk1, soprano257Atk2, soprano257Atk3, soprano257Atk4};


static const uint16_t *skipsaw[5] = {
	skipsaw0, skipsaw1, skipsaw2, skipsaw3, skipsaw4};


static const uint16_t *sharpExpoSymReleaseFamily[9] = {
	sharpExpoSymReleaseFamily0, sharpExpoSymReleaseFamily1, sharpExpoSymReleaseFamily2, sharpExpoSymReleaseFamily3, sharpExpoSymReleaseFamily4, sharpExpoSymReleaseFamily5, sharpExpoSymReleaseFamily6, sharpExpoSymReleaseFamily7,
	sharpExpoSymReleaseFamily8};


static const uint16_t *waterphone_release[9] = {
	waterphone_release0, waterphone_release1, waterphone_release2, waterphone_release3, waterphone_release4, waterphone_release5, waterphone_release6, waterphone_release7,
	waterphone_release8};


static const uint16_t *trains_release[9] = {
	trains_release0, trains_release1, trains_release2, trains_release3, trains_release4, trains_release5, trains_release6, trains_release7,
	trains_release8};


static const uint16_t *exciteBikeAttackFamily[9] = {
	exciteBikeAttackFamily0, exciteBikeAttackFamily1, exciteBikeAttackFamily2, exciteBikeAttackFamily3, exciteBikeAttackFamily4, exciteBikeAttackFamily5, exciteBikeAttackFamily6, exciteBikeAttackFamily7,
	exciteBikeAttackFamily8};


static const uint16_t *moogSquareShiftAttackFamily[9] = {
	moogSquareShiftAttackFamily0, moogSquareShiftAttackFamily1, moogSquareShiftAttackFamily2, moogSquareShiftAttackFamily3, moogSquareShiftAttackFamily4, moogSquareShiftAttackFamily5, moogSquareShiftAttackFamily6, moogSquareShiftAttackFamily7,
	moogSquareShiftAttackFamily8};


static const uint16_t *sinwavefold_257_Family[9] = {
	sinwavefold_257_Family0, sinwavefold_257_Family1, sinwavefold_257_Family2, sinwavefold_257_Family3, sinwavefold_257_Family4, sinwavefold_257_Family5, sinwavefold_257_Family6, sinwavefold_257_Family7,
	sinwavefold_257_Family8};


static const uint16_t *algerianReleaseFamily[5] = {
	algerianReleaseFamily0, algerianReleaseFamily1, algerianReleaseFamily2, algerianReleaseFamily3, algerianReleaseFamily4};


static const uint16_t *circular_257_slopes[5] = {
	circular_257_slopes0, circular_257_slopes1, circular_257_slopes2, circular_257_slopes3, circular_257_slopes4};


static const uint16_t *newBounceFamily[5] = {
	newBounceFamily0, newBounceFamily1, newBounceFamily2, newBounceFamily3, newBounceFamily4};


static const uint16_t *exciteBikeReleaseFamily[9] = {
	exciteBikeReleaseFamily0, exciteBikeReleaseFamily1, exciteBikeReleaseFamily2, exciteBikeReleaseFamily3, exciteBikeReleaseFamily4, exciteBikeReleaseFamily5, exciteBikeReleaseFamily6, exciteBikeReleaseFamily7,
	exciteBikeReleaseFamily8};


static const uint16_t *test_fm_attack[5] = {
	test_fm_attack0, test_fm_attack1, test_fm_attack2, test_fm_attack3, test_fm_attack4};


static const uint16_t *waterphone_attack[9] = {
	waterphone_attack0, waterphone_attack1, waterphone_attack2, waterphone_attack3, waterphone_attack4, waterphone_attack5, waterphone_attack6, waterphone_attack7,
	waterphone_attack8};


static const uint16_t *quintic_inout2quintic_outin257_slopes[9] = {
	quintic_inout2quintic_outin257_slopes0, quintic_inout2quintic_outin257_slopes1, quintic_inout2quintic_outin257_slopes2, quintic_inout2quintic_outin257_slopes3, quintic_inout2quintic_outin257_slopes4, quintic_inout2quintic_outin257_slopes5, quintic_inout2quintic_outin257_slopes6, quintic_inout2quintic_outin257_slopes7,
	quintic_inout2quintic_outin257_slopes8};


static const uint16_t *trioddReleaseFamily[9] = {
	trioddReleaseFamily0, trioddReleaseFamily1, trioddReleaseFamily2, trioddReleaseFamily3, trioddReleaseFamily4, trioddReleaseFamily5, trioddReleaseFamily6, trioddReleaseFamily7,
	trioddReleaseFamily8};


static const uint16_t *algerianAttackFamily[5] = {
	algerianAttackFamily0, algerianAttackFamily1, algerianAttackFamily2, algerianAttackFamily3, algerianAttackFamily4};


static const uint16_t *sharpExpoSymAttackFamily[9] = {
	sharpExpoSymAttackFamily0, sharpExpoSymAttackFamily1, sharpExpoSymAttackFamily2, sharpExpoSymAttackFamily3, sharpExpoSymAttackFamily4, sharpExpoSymAttackFamily5, sharpExpoSymAttackFamily6, sharpExpoSymAttackFamily7,
	sharpExpoSymAttackFamily8};


static const uint16_t *quintic_out2quintic_in257_slopes[9] = {
	quintic_out2quintic_in257_slopes0, quintic_out2quintic_in257_slopes1, quintic_out2quintic_in257_slopes2, quintic_out2quintic_in257_slopes3, quintic_out2quintic_in257_slopes4, quintic_out2quintic_in257_slopes5, quintic_out2quintic_in257_slopes6, quintic_out2quintic_in257_slopes7,
	quintic_out2quintic_in257_slopes8};


static const uint16_t *linwavefold_257_Family[5] = {
	linwavefold_257_Family0, linwavefold_257_Family1, linwavefold_257_Family2, linwavefold_257_Family3, linwavefold_257_Family4};


static const uint16_t *allLinear129_5[5] = {
	allLinear129_50, allLinear129_51, allLinear129_52, allLinear129_53, allLinear129_54};


static const uint16_t *impshort[9] = {
	impshort0, impshort1, impshort2, impshort3, impshort4, impshort5, impshort6, impshort7,
	impshort8};


static const uint16_t *sawBendReleaseFamily[5] = {
	sawBendReleaseFamily0, sawBendReleaseFamily1, sawBendReleaseFamily2, sawBendReleaseFamily3, sawBendReleaseFamily4};


static const uint16_t *csound_formants_release[9] = {
	csound_formants_release0, csound_formants_release1, csound_formants_release2, csound_formants_release3, csound_formants_release4, csound_formants_release5, csound_formants_release6, csound_formants_release7,
	csound_formants_release8};


static const uint16_t *gamma257Attack[9] = {
	gamma257Attack0, gamma257Attack1, gamma257Attack2, gamma257Attack3, gamma257Attack4, gamma257Attack5, gamma257Attack6, gamma257Attack7,
	gamma257Attack8};


// TABLES 


static const Wavetable moogSquare = {
	.attackSlope = moogSquareShiftAttackFamily,
	.releaseSlope = moogSquareShiftReleaseFamily,
	.slopeLength = 256,
	.numWaveforms = 9};


static const Wavetable triOdd = {
	.attackSlope = trioddAttackFamily,
	.releaseSlope = trioddReleaseFamily,
	.slopeLength = 256,
	.numWaveforms = 9};


static const Wavetable sawBend = {
	.attackSlope = sawBendAttackFamily,
	.releaseSlope = sawBendReleaseFamily,
	.slopeLength = 256,
	.numWaveforms = 5};


static const Wavetable exciteBike = {
	.attackSlope = exciteBikeAttackFamily,
	.releaseSlope = exciteBikeReleaseFamily,
	.slopeLength = 256,
	.numWaveforms = 9};


static const Wavetable algerian = {
	.attackSlope = algerianAttackFamily,
	.releaseSlope = algerianReleaseFamily,
	.slopeLength = 256,
	.numWaveforms = 5};


static const Wavetable sharpExpoSym = {
	.attackSlope = sharpExpoSymAttackFamily,
	.releaseSlope = sharpExpoSymReleaseFamily,
	.slopeLength = 256,
	.numWaveforms = 9};


static const Wavetable impevens = {
	.attackSlope = impshort,
	.releaseSlope = impshort,
	.slopeLength = 256,
	.numWaveforms = 9};


static const Wavetable skipSaw = {
	.attackSlope = skipsaw,
	.releaseSlope = skipsaw,
	.slopeLength = 256,
	.numWaveforms = 5};


static const Wavetable tenor257 = {
	.attackSlope = tenor257Atk,
	.releaseSlope = tenor257Rls,
	.slopeLength = 256,
	.numWaveforms = 5};


static const Wavetable linwavefold_257 = {
	.attackSlope = linwavefold_257_Family,
	.releaseSlope = linwavefold_257_Family,
	.slopeLength = 256,
	.numWaveforms = 5};


static const Wavetable sinwavefold_257 = {
	.attackSlope = sinwavefold_257_Family,
	.releaseSlope = sinwavefold_257_Family,
	.slopeLength = 256,
	.numWaveforms = 9};


static const Wavetable additive_tri_to_pulse = {
	.attackSlope = additive_tri_to_pulseFamily,
	.releaseSlope = additive_tri_to_pulseFamily,
	.slopeLength = 256,
	.numWaveforms = 5};


static const Wavetable newBounce = {
	.attackSlope = newBounceFamily,
	.releaseSlope = newBounceFamily,
	.slopeLength = 256,
	.numWaveforms = 5};


static const Wavetable soprano257 = {
	.attackSlope = soprano257Atk,
	.releaseSlope = soprano257Rls,
	.slopeLength = 256,
	.numWaveforms = 5};


static const Wavetable testRMS = {
	.attackSlope = allLinear129_5,
	.releaseSlope = testRMSRMSRls,
	.slopeLength = 256,
	.numWaveforms = 5};


static const Wavetable gamma257 = {
	.attackSlope = gamma257Attack,
	.releaseSlope = gamma257Attack,
	.slopeLength = 256,
	.numWaveforms = 9};


static const Wavetable bounce_257 = {
	.attackSlope = bounce_257_slopes,
	.releaseSlope = bounce_257_slopes,
	.slopeLength = 256,
	.numWaveforms = 5};


static const Wavetable circular_257 = {
	.attackSlope = circular_257_slopes,
	.releaseSlope = circular_257_slopes,
	.slopeLength = 256,
	.numWaveforms = 5};


static const Wavetable quintic_out2quintic_in257 = {
	.attackSlope = quintic_out2quintic_in257_slopes,
	.releaseSlope = quintic_out2quintic_in257_slopes,
	.slopeLength = 256,
	.numWaveforms = 9};


static const Wavetable quintic_inout2quintic_outin257 = {
	.attackSlope = quintic_inout2quintic_outin257_slopes,
	.releaseSlope = quintic_inout2quintic_outin257_slopes,
	.slopeLength = 256,
	.numWaveforms = 9};


static const Wavetable test_fm = {
	.attackSlope = test_fm_attack,
	.releaseSlope = test_fm_release,
	.slopeLength = 256,
	.numWaveforms = 5};


static const Wavetable trains = {
	.attackSlope = trains_attack,
	.releaseSlope = trains_release,
	.slopeLength = 256,
	.numWaveforms = 9};


static const Wavetable waterphone = {
	.attackSlope = waterphone_attack,
	.releaseSlope = waterphone_release,
	.slopeLength = 256,
	.numWaveforms = 9};


static const Wavetable vox = {
	.attackSlope = vox_attack,
	.releaseSlope = vox_release,
	.slopeLength = 256,
	.numWaveforms = 9};


static const Wavetable csound_formants = {
	.attackSlope = csound_formants_attack,
	.releaseSlope = csound_formants_release,
	.slopeLength = 256,
	.numWaveforms = 9};






static const Wavetable imp_5 = { .attackSlope = impshort_5, .releaseSlope =
		impshort, .slopeLength = 256, .numWaveforms = 5 };

static const Wavetable drum =
		{ .attackSlope = allLinear, .releaseSlope =
				allExpo, .slopeLength = 256,
				.numWaveforms = 5 };

// load each sample from flash to ram with bitshift by 3 and store in bottom halfword
// store difference between sample and corresponding sample in adjacent waveform in top halfword

static inline void loadWavetableWithDiff(const Wavetable * table,
		uint32_t * tableRead) {

	uint32_t numSamples = table->slopeLength;

	//for each table in the table
	for (uint32_t i = 0; i < table->numWaveforms; i++) {
		//include the "last two" samples from release
		*((tableRead + 517 * i) + 0) = *(*(table->releaseSlope + i) + 0) >> 3;
		*((tableRead + 517 * i) + 1) = *(*(table->releaseSlope + i) + 0) >> 3;
		//fill in a full cycle's worth of samples
		//the release gets reversed
		//we drop the last sample from attack and the first from releas
		for (uint32_t j = 0; j < numSamples; j++) {
			*((tableRead + 517 * i) + 2 + j) = *(*(table->attackSlope + i) + j)
					>> 3;
			*((tableRead + 517 * i) + 2 + numSamples + j) =
					*(*(table->releaseSlope + i) + numSamples - j) >> 3;
		}
		//pad out the "first two" samples from attack
		*((tableRead + 517 * i) + (numSamples << 1) + 2) =
				*(*(table->attackSlope + i) + 0) >> 3;
		*((tableRead + 517 * i) + (numSamples << 1) + 3) =
				*(*(table->attackSlope + i) + 0) >> 3;
		*((tableRead + 517 * i) + (numSamples << 1) + 4) =
				*(*(table->attackSlope + i) + 0) >> 3;
	}

	for (uint32_t i = 0; i < table->numWaveforms - 1; i++) {
		for (uint32_t j = 0; j < (numSamples * 2 + 5); j++) {
			*((tableRead + 517 * i) + j) |= (*((tableRead + 517 * (i + 1)) + j)
					- *((tableRead + 517 * i) + j)) << 16;
		}
	}

}

static inline void loadWavetableWithDiff15Bit(const Wavetable * table,
		uint32_t * tableRead) {

	uint32_t numSamples = table->slopeLength;

	//for each table in the table
	for (uint32_t i = 0; i < table->numWaveforms; i++) {
		//pad with duplicate samples
		*((tableRead + 517 * i) + 0) = *(*(table->releaseSlope + i) + 0);
		*((tableRead + 517 * i) + 1) = *(*(table->releaseSlope + i) + 0);
		//fill in a full cycle's worth of samples
		//the release gets reversed
		//we drop the last sample from attack and the first from releas
		for (uint32_t j = 0; j < numSamples; j++) {
			*((tableRead + 517 * i) + 2 + j) = *(*(table->attackSlope + i) + j);
			*((tableRead + 517 * i) + 2 + numSamples + j) =
					*(*(table->releaseSlope + i) + numSamples - j);
		}
		//pad with duplicate samples
		*((tableRead + 517 * i) + (numSamples << 1) + 2) =
				*(*(table->attackSlope + i) + 0);
		*((tableRead + 517 * i) + (numSamples << 1) + 3) =
				*(*(table->attackSlope + i) + 0);
		*((tableRead + 517 * i) + (numSamples << 1) + 4) =
				*(*(table->attackSlope + i) + 0);
	}

	for (uint32_t i = 0; i < table->numWaveforms - 1; i++) {
		for (uint32_t j = 0; j < (numSamples * 2 + 5); j++) {
			*((tableRead + 517 * i) + j) |= (*((tableRead + 517 * (i + 1)) + j)
					- *((tableRead + 517 * i) + j)) << 16;
		}
	}

}

static inline void loadSingleTable15Bit(const Wavetable * table,
		uint32_t * tableRead) {

	uint32_t numSamples = table->slopeLength;

	//for each table in the table
	for (uint32_t i = 0; i < 1; i++) {
		//pad with duplicate samples
		*((tableRead + 517 * i) + 0) = *(*(table->releaseSlope + i) + 0);
		*((tableRead + 517 * i) + 1) = *(*(table->releaseSlope + i) + 0);
		//fill in a full cycle's worth of samples
		//the release gets reversed
		//we drop the last sample from attack and the first from releas
		for (uint32_t j = 0; j < numSamples; j++) {
			*((tableRead + 517 * i) + 2 + j) = *(*(table->attackSlope + i) + j);
			*((tableRead + 517 * i) + 2 + numSamples + j) =
					*(*(table->releaseSlope + i) + numSamples - j);
		}
		//pad with duplicate samples
		*((tableRead + 517 * i) + (numSamples << 1) + 2) =
				*(*(table->attackSlope + i) + 0);
		*((tableRead + 517 * i) + (numSamples << 1) + 3) =
				*(*(table->attackSlope + i) + 0);
		*((tableRead + 517 * i) + (numSamples << 1) + 4) =
				*(*(table->attackSlope + i) + 0);
	}

}

/*
 *
 * Link phase distortion waveforms into tables
 * Currently, phase distortion table size is fixed at 33 and waveform sample length 65
 *
 */

static const uint32_t * phaseDistPWMTable[33] = { phaseDistPWM_0,
		phaseDistPWM_1, phaseDistPWM_2, phaseDistPWM_3, phaseDistPWM_4,
		phaseDistPWM_5, phaseDistPWM_6, phaseDistPWM_7, phaseDistPWM_8,
		phaseDistPWM_9, phaseDistPWM_10, phaseDistPWM_11, phaseDistPWM_12,
		phaseDistPWM_13, phaseDistPWM_14, phaseDistPWM_15, phaseDistPWM_16,
		phaseDistPWM_17, phaseDistPWM_18, phaseDistPWM_19, phaseDistPWM_20,
		phaseDistPWM_21, phaseDistPWM_22, phaseDistPWM_23, phaseDistPWM_24,
		phaseDistPWM_25, phaseDistPWM_26, phaseDistPWM_27, phaseDistPWM_28,
		phaseDistPWM_29, phaseDistPWM_30, phaseDistPWM_31, phaseDistPWM_32 };

typedef struct {
	const uint32_t **lookupTable;
	uint32_t tableLength;
	uint32_t numWaveforms;
} PhaseDistTable;

static const PhaseDistTable phaseDistPWM = { .lookupTable = phaseDistPWMTable,
		.tableLength = 65, .numWaveforms = 33 };

static inline void loadPhaseDistTable(PhaseDistTable * table,
		uint32_t * tableRead) {
//	memcpy(tableRead, table->lookupTable, 33*65*sizeof(uint32_t));
	for (int32_t i = 0; i < 33; i++) {
		for (int32_t j = 0; j < 65; j++) {
			*((tableRead + i * 65) + j) = *(*(table->lookupTable + i) + j);
		}
	}
}

/*
 *
 * Expo lookup table for 1v/oct
 *
 */

#define expotable10oct {65536, 65654, 65773, 65891, 66010, 66130, 66249, 66369, 66489, 66609, 66729, 66850, 66971, 67092, 67213, 67334, 67456, 67578, 67700, 67822, 67945, 68067, 68190, 68314, 68437, 68561, 68685, 68809, 68933, 69057, 69182, 69307, 69432, 69558, 69684, 69809, 69936, 70062, 70189, 70315, 70442, 70570, 70697, 70825, 70953, 71081, 71209, 71338, 71467, 71596, 71725, 71855, 71985, 72115, 72245, 72376, 72507, 72638, 72769, 72900, 73032, 73164, 73296, 73429, 73561, 73694, 73827, 73961, 74094, 74228, 74362, 74497, 74631, 74766, 74901, 75036, 75172, 75308, 75444, 75580, 75717, 75853, 75991, 76128, 76265, 76403, 76541, 76679, 76818, 76957, 77096, 77235, 77375, 77514, 77655, 77795, 77935, 78076, 78217, 78359, 78500, 78642, 78784, 78926, 79069, 79212, 79355, 79498, 79642, 79786, 79930, 80074, 80219, 80364, 80509, 80655, 80800, 80946, 81093, 81239, 81386, 81533, 81680, 81828, 81976, 82124, 82272, 82421, 82570, 82719, 82868, 83018, 83168, 83318, 83469, 83620, 83771, 83922, 84074, 84226, 84378, 84530, 84683, 84836, 84989, 85143, 85297, 85451, 85605, 85760, 85915, 86070, 86225, 86381, 86537, 86694, 86850, 87007, 87164, 87322, 87480, 87638, 87796, 87955, 88113, 88273, 88432, 88592, 88752, 88912, 89073, 89234, 89395, 89557, 89718, 89881, 90043, 90206, 90369, 90532, 90695, 90859, 91023, 91188, 91353, 91518, 91683, 91849, 92015, 92181, 92347, 92514, 92681, 92849, 93017, 93185, 93353, 93522, 93691, 93860, 94029, 94199, 94370, 94540, 94711, 94882, 95053, 95225, 95397, 95570, 95742, 95915, 96088, 96262, 96436, 96610, 96785, 96960, 97135, 97310, 97486, 97662, 97839, 98015, 98193, 98370, 98548, 98726, 98904, 99083, 99262, 99441, 99621, 99801, 99981, 100162, 100343, 100524, 100706, 100888, 101070, 101252, 101435, 101619, 101802, 101986, 102170, 102355, 102540, 102725, 102911, 103097, 103283, 103470, 103657, 103844, 104031, 104219, 104408, 104596, 104785, 104975, 105164, 105354, 105545, 105735, 105926, 106118, 106309, 106501, 106694, 106887, 107080, 107273, 107467, 107661, 107856, 108051, 108246, 108441, 108637, 108834, 109030, 109227, 109425, 109622, 109820, 110019, 110217, 110417, 110616, 110816, 111016, 111217, 111418, 111619, 111821, 112023, 112225, 112428, 112631, 112834, 113038, 113243, 113447, 113652, 113857, 114063, 114269, 114476, 114682, 114890, 115097, 115305, 115514, 115722, 115931, 116141, 116351, 116561, 116771, 116982, 117194, 117405, 117618, 117830, 118043, 118256, 118470, 118684, 118898, 119113, 119328, 119544, 119760, 119976, 120193, 120410, 120628, 120846, 121064, 121283, 121502, 121721, 121941, 122162, 122382, 122603, 122825, 123047, 123269, 123492, 123715, 123939, 124162, 124387, 124611, 124837, 125062, 125288, 125514, 125741, 125968, 126196, 126424, 126652, 126881, 127110, 127340, 127570, 127801, 128032, 128263, 128495, 128727, 128959, 129192, 129426, 129660, 129894, 130129, 130364, 130599, 130835, 131072, 131308, 131546, 131783, 132021, 132260, 132499, 132738, 132978, 133218, 133459, 133700, 133942, 134184, 134426, 134669, 134912, 135156, 135400, 135645, 135890, 136135, 136381, 136628, 136875, 137122, 137370, 137618, 137866, 138115, 138365, 138615, 138865, 139116, 139368, 139619, 139872, 140124, 140378, 140631, 140885, 141140, 141395, 141650, 141906, 142163, 142419, 142677, 142935, 143193, 143451, 143711, 143970, 144230, 144491, 144752, 145014, 145276, 145538, 145801, 146064, 146328, 146593, 146858, 147123, 147389, 147655, 147922, 148189, 148457, 148725, 148994, 149263, 149532, 149803, 150073, 150344, 150616, 150888, 151161, 151434, 151707, 151982, 152256, 152531, 152807, 153083, 153359, 153637, 153914, 154192, 154471, 154750, 155029, 155310, 155590, 155871, 156153, 156435, 156718, 157001, 157284, 157569, 157853, 158138, 158424, 158710, 158997, 159284, 159572, 159860, 160149, 160439, 160729, 161019, 161310, 161601, 161893, 162186, 162479, 162772, 163066, 163361, 163656, 163952, 164248, 164545, 164842, 165140, 165438, 165737, 166037, 166337, 166637, 166938, 167240, 167542, 167845, 168148, 168452, 168756, 169061, 169366, 169672, 169979, 170286, 170594, 170902, 171211, 171520, 171830, 172140, 172451, 172763, 173075, 173388, 173701, 174015, 174329, 174644, 174960, 175276, 175592, 175910, 176227, 176546, 176865, 177184, 177504, 177825, 178146, 178468, 178791, 179114, 179437, 179762, 180086, 180412, 180738, 181064, 181391, 181719, 182047, 182376, 182706, 183036, 183367, 183698, 184030, 184362, 184695, 185029, 185363, 185698, 186034, 186370, 186707, 187044, 187382, 187720, 188059, 188399, 188740, 189081, 189422, 189764, 190107, 190451, 190795, 191140, 191485, 191831, 192177, 192525, 192872, 193221, 193570, 193920, 194270, 194621, 194973, 195325, 195678, 196031, 196386, 196740, 197096, 197452, 197809, 198166, 198524, 198883, 199242, 199602, 199963, 200324, 200686, 201048, 201412, 201776, 202140, 202505, 202871, 203238, 203605, 203973, 204341, 204711, 205080, 205451, 205822, 206194, 206566, 206940, 207314, 207688, 208063, 208439, 208816, 209193, 209571, 209950, 210329, 210709, 211090, 211471, 211853, 212236, 212619, 213003, 213388, 213774, 214160, 214547, 214935, 215323, 215712, 216102, 216492, 216883, 217275, 217668, 218061, 218455, 218850, 219245, 219641, 220038, 220435, 220834, 221233, 221632, 222033, 222434, 222836, 223238, 223642, 224046, 224451, 224856, 225262, 225669, 226077, 226486, 226895, 227305, 227715, 228127, 228539, 228952, 229365, 229780, 230195, 230611, 231028, 231445, 231863, 232282, 232702, 233122, 233543, 233965, 234388, 234811, 235236, 235661, 236086, 236513, 236940, 237368, 237797, 238227, 238657, 239088, 239520, 239953, 240387, 240821, 241256, 241692, 242129, 242566, 243004, 243443, 243883, 244324, 244765, 245207, 245650, 246094, 246539, 246984, 247430, 247878, 248325, 248774, 249223, 249674, 250125, 250577, 251029, 251483, 251937, 252393, 252849, 253305, 253763, 254221, 254681, 255141, 255602, 256064, 256526, 256990, 257454, 257919, 258385, 258852, 259320, 259788, 260258, 260728, 261199, 261671, 262144, 262617, 263092, 263567, 264043, 264520, 264998, 265477, 265956, 266437, 266918, 267401, 267884, 268368, 268853, 269338, 269825, 270312, 270801, 271290, 271780, 272271, 272763, 273256, 273750, 274244, 274740, 275236, 275733, 276231, 276731, 277231, 277731, 278233, 278736, 279239, 279744, 280249, 280756, 281263, 281771, 282280, 282790, 283301, 283813, 284326, 284839, 285354, 285870, 286386, 286903, 287422, 287941, 288461, 288982, 289505, 290028, 290552, 291077, 291602, 292129, 292657, 293186, 293716, 294246, 294778, 295310, 295844, 296378, 296914, 297450, 297988, 298526, 299065, 299606, 300147, 300689, 301233, 301777, 302322, 302868, 303415, 303964, 304513, 305063, 305614, 306166, 306719, 307274, 307829, 308385, 308942, 309500, 310059, 310620, 311181, 311743, 312306, 312870, 313436, 314002, 314569, 315138, 315707, 316277, 316849, 317421, 317995, 318569, 319145, 319721, 320299, 320878, 321458, 322038, 322620, 323203, 323787, 324372, 324958, 325545, 326133, 326722, 327313, 327904, 328497, 329090, 329685, 330280, 330877, 331475, 332074, 332674, 333275, 333877, 334480, 335084, 335690, 336296, 336904, 337512, 338122, 338733, 339345, 339958, 340572, 341188, 341804, 342422, 343040, 343660, 344281, 344903, 345526, 346150, 346776, 347402, 348030, 348659, 349289, 349920, 350552, 351185, 351820, 352455, 353092, 353730, 354369, 355009, 355651, 356293, 356937, 357582, 358228, 358875, 359524, 360173, 360824, 361476, 362129, 362783, 363439, 364095, 364753, 365412, 366072, 366734, 367396, 368060, 368725, 369391, 370059, 370727, 371397, 372068, 372740, 373414, 374088, 374764, 375441, 376119, 376799, 377480, 378162, 378845, 379529, 380215, 380902, 381590, 382280, 382970, 383662, 384355, 385050, 385745, 386442, 387141, 387840, 388541, 389243, 389946, 390651, 391356, 392063, 392772, 393481, 394192, 394904, 395618, 396333, 397049, 397766, 398485, 399205, 399926, 400648, 401372, 402097, 402824, 403552, 404281, 405011, 405743, 406476, 407210, 407946, 408683, 409422, 410161, 410902, 411645, 412388, 413133, 413880, 414628, 415377, 416127, 416879, 417632, 418387, 419143, 419900, 420658, 421418, 422180, 422943, 423707, 424472, 425239, 426007, 426777, 427548, 428321, 429094, 429870, 430646, 431424, 432204, 432985, 433767, 434551, 435336, 436122, 436910, 437700, 438490, 439283, 440076, 440871, 441668, 442466, 443265, 444066, 444868, 445672, 446477, 447284, 448092, 448902, 449713, 450525, 451339, 452155, 452972, 453790, 454610, 455431, 456254, 457078, 457904, 458731, 459560, 460390, 461222, 462056, 462890, 463727, 464564, 465404, 466245, 467087, 467931, 468776, 469623, 470472, 471322, 472173, 473026, 473881, 474737, 475595, 476454, 477315, 478177, 479041, 479907, 480774, 481642, 482513, 483384, 484258, 485133, 486009, 486887, 487767, 488648, 489531, 490415, 491301, 492189, 493078, 493969, 494861, 495756, 496651, 497549, 498447, 499348, 500250, 501154, 502059, 502966, 503875, 504786, 505698, 506611, 507526, 508443, 509362, 510282, 511204, 512128, 513053, 513980, 514909, 515839, 516771, 517705, 518640, 519577, 520516, 521456, 522398, 523342, 524288, 525235, 526184, 527134, 528087, 529041, 529997, 530954, 531913, 532874, 533837, 534802, 535768, 536736, 537706, 538677, 539650, 540625, 541602, 542581, 543561, 544543, 545527, 546512, 547500, 548489, 549480, 550473, 551467, 552463, 553462, 554462, 555463, 556467, 557472, 558479, 559488, 560499, 561512, 562526, 563543, 564561, 565581, 566603, 567626, 568652, 569679, 570709, 571740, 572773, 573807, 574844, 575883, 576923, 577965, 579010, 580056, 581104, 582154, 583205, 584259, 585315, 586372, 587432, 588493, 589556, 590621, 591688, 592757, 593828, 594901, 595976, 597053, 598131, 599212, 600295, 601379, 602466, 603554, 604645, 605737, 606831, 607928, 609026, 610126, 611229, 612333, 613439, 614548, 615658, 616770, 617885, 619001, 620119, 621240, 622362, 623487, 624613, 625741, 626872, 628005, 629139, 630276, 631415, 632555, 633698, 634843, 635990, 637139, 638290, 639443, 640599, 641756, 642916, 644077, 645241, 646407, 647574, 648744, 649916, 651091, 652267, 653445, 654626, 655809, 656994, 658181, 659370, 660561, 661754, 662950, 664148, 665348, 666550, 667754, 668960, 670169, 671380, 672593, 673808, 675025, 676245, 677467, 678691, 679917, 681145, 682376, 683609, 684844, 686081, 687321, 688563, 689807, 691053, 692301, 693552, 694805, 696060, 697318, 698578, 699840, 701104, 702371, 703640, 704911, 706185, 707461, 708739, 710019, 711302, 712587, 713875, 715165, 716457, 717751, 719048, 720347, 721648, 722952, 724258, 725567, 726878, 728191, 729507, 730825, 732145, 733468, 734793, 736120, 737450, 738783, 740118, 741455, 742794, 744136, 745481, 746828, 748177, 749529, 750883, 752239, 753598, 754960, 756324, 757690, 759059, 760431, 761805, 763181, 764560, 765941, 767325, 768711, 770100, 771491, 772885, 774282, 775681, 777082, 778486, 779892, 781302, 782713, 784127, 785544, 786963, 788385, 789809, 791236, 792666, 794098, 795533, 796970, 798410, 799852, 801297, 802745, 804195, 805648, 807104, 808562, 810023, 811486, 812953, 814421, 815893, 817367, 818844, 820323, 821805, 823290, 824777, 826267, 827760, 829256, 830754, 832255, 833758, 835265, 836774, 838286, 839800, 841317, 842837, 844360, 845886, 847414, 848945, 850479, 852015, 853555, 855097, 856642, 858189, 859740, 861293, 862849, 864408, 865970, 867535, 869102, 870672, 872245, 873821, 875400, 876981, 878566, 880153, 881743, 883336, 884932, 886531, 888133, 889737, 891345, 892955, 894569, 896185, 897804, 899426, 901051, 902679, 904310, 905944, 907580, 909220, 910863, 912508, 914157, 915809, 917463, 919121, 920781, 922445, 924112, 925781, 927454, 929129, 930808, 932490, 934175, 935862, 937553, 939247, 940944, 942644, 944347, 946053, 947762, 949475, 951190, 952909, 954630, 956355, 958083, 959814, 961548, 963285, 965026, 966769, 968516, 970266, 972019, 973775, 975534, 977296, 979062, 980831, 982603, 984378, 986157, 987939, 989723, 991512, 993303, 995098, 996895, 998696, 1000501, 1002308, 1004119, 1005933, 1007751, 1009572, 1011396, 1013223, 1015053, 1016887, 1018725, 1020565, 1022409, 1024256, 1026107, 1027961, 1029818, 1031678, 1033542, 1035410, 1037280, 1039154, 1041032, 1042913, 1044797, 1046684, 1048576, 1050470, 1052368, 1054269, 1056174, 1058082, 1059994, 1061909, 1063827, 1065749, 1067675, 1069604, 1071536, 1073472, 1075412, 1077355, 1079301, 1081251, 1083205, 1085162, 1087122, 1089086, 1091054, 1093025, 1095000, 1096978, 1098960, 1100946, 1102935, 1104927, 1106924, 1108924, 1110927, 1112934, 1114945, 1116959, 1118977, 1120999, 1123024, 1125053, 1127086, 1129122, 1131162, 1133206, 1135253, 1137304, 1139359, 1141418, 1143480, 1145546, 1147615, 1149689, 1151766, 1153847, 1155931, 1158020, 1160112, 1162208, 1164308, 1166411, 1168519, 1170630, 1172745, 1174864, 1176986, 1179113, 1181243, 1183377, 1185515, 1187657, 1189803, 1191952, 1194106, 1196263, 1198425, 1200590, 1202759, 1204932, 1207109, 1209290, 1211475, 1213663, 1215856, 1218053, 1220253, 1222458, 1224667, 1226879, 1229096, 1231317, 1233541, 1235770, 1238002, 1240239, 1242480, 1244725, 1246974, 1249226, 1251483, 1253744, 1256010, 1258279, 1260552, 1262830, 1265111, 1267397, 1269687, 1271981, 1274279, 1276581, 1278887, 1281198, 1283513, 1285832, 1288155, 1290482, 1292814, 1295149, 1297489, 1299833, 1302182, 1304534, 1306891, 1309253, 1311618, 1313988, 1316362, 1318740, 1321122, 1323509, 1325901, 1328296, 1330696, 1333100, 1335509, 1337921, 1340339, 1342760, 1345186, 1347617, 1350051, 1352490, 1354934, 1357382, 1359834, 1362291, 1364752, 1367218, 1369688, 1372163, 1374642, 1377126, 1379614, 1382106, 1384603, 1387105, 1389611, 1392121, 1394637, 1397156, 1399681, 1402209, 1404743, 1407281, 1409823, 1412370, 1414922, 1417478, 1420039, 1422605, 1425175, 1427750, 1430330, 1432914, 1435503, 1438096, 1440694, 1443297, 1445905, 1448517, 1451134, 1453756, 1456382, 1459014, 1461650, 1464290, 1466936, 1469586, 1472241, 1474901, 1477566, 1480236, 1482910, 1485589, 1488273, 1490962, 1493656, 1496354, 1499058, 1501766, 1504479, 1507197, 1509921, 1512649, 1515381, 1518119, 1520862, 1523610, 1526362, 1529120, 1531883, 1534650, 1537423, 1540201, 1542983, 1545771, 1548564, 1551362, 1554165, 1556973, 1559785, 1562604, 1565427, 1568255, 1571088, 1573927, 1576770, 1579619, 1582473, 1585332, 1588196, 1591066, 1593940, 1596820, 1599705, 1602595, 1605491, 1608391, 1611297, 1614208, 1617125, 1620046, 1622973, 1625906, 1628843, 1631786, 1634734, 1637688, 1640646, 1643611, 1646580, 1649555, 1652535, 1655521, 1658512, 1661508, 1664510, 1667517, 1670530, 1673548, 1676572, 1679601, 1682635, 1685675, 1688721, 1691772, 1694829, 1697891, 1700958, 1704031, 1707110, 1710194, 1713284, 1716379, 1719480, 1722587, 1725699, 1728817, 1731940, 1735070, 1738204, 1741345, 1744491, 1747643, 1750800, 1753963, 1757132, 1760307, 1763487, 1766673, 1769865, 1773063, 1776266, 1779475, 1782690, 1785911, 1789138, 1792370, 1795608, 1798852, 1802102, 1805358, 1808620, 1811888, 1815161, 1818441, 1821726, 1825017, 1828315, 1831618, 1834927, 1838242, 1841563, 1844891, 1848224, 1851563, 1854908, 1858259, 1861617, 1864980, 1868350, 1871725, 1875107, 1878494, 1881888, 1885288, 1888695, 1892107, 1895525, 1898950, 1902381, 1905818, 1909261, 1912711, 1916166, 1919628, 1923096, 1926571, 1930052, 1933539, 1937032, 1940532, 1944038, 1947550, 1951068, 1954593, 1958125, 1961663, 1965207, 1968757, 1972314, 1975878, 1979447, 1983024, 1986606, 1990196, 1993791, 1997393, 2001002, 2004617, 2008239, 2011867, 2015502, 2019144, 2022792, 2026446, 2030107, 2033775, 2037450, 2041131, 2044818, 2048513, 2052214, 2055922, 2059636, 2063357, 2067085, 2070820, 2074561, 2078309, 2082064, 2085826, 2089594, 2093369, 2097152, 2100940, 2104736, 2108539, 2112348, 2116165, 2119988, 2123818, 2127655, 2131499, 2135350, 2139208, 2143073, 2146945, 2150824, 2154710, 2158603, 2162503, 2166410, 2170324, 2174245, 2178173, 2182108, 2186051, 2190000, 2193957, 2197921, 2201892, 2205870, 2209855, 2213848, 2217848, 2221855, 2225869, 2229890, 2233919, 2237955, 2241998, 2246049, 2250107, 2254172, 2258245, 2262325, 2266412, 2270507, 2274609, 2278719, 2282836, 2286960, 2291092, 2295231, 2299378, 2303532, 2307694, 2311863, 2316040, 2320225, 2324417, 2328616, 2332823, 2337038, 2341260, 2345490, 2349728, 2353973, 2358226, 2362487, 2366755, 2371031, 2375315, 2379606, 2383905, 2388212, 2392527, 2396850, 2401180, 2405518, 2409864, 2414218, 2418580, 2422950, 2427327, 2431713, 2436106, 2440507, 2444917, 2449334, 2453759, 2458192, 2462634, 2467083, 2471540, 2476005, 2480479, 2484960, 2489450, 2493948, 2498453, 2502967, 2507489, 2512020, 2516558, 2521105, 2525660, 2530223, 2534794, 2539374, 2543962, 2548558, 2553162, 2557775, 2562396, 2567026, 2571664, 2576310, 2580965, 2585628, 2590299, 2594979, 2599667, 2604364, 2609069, 2613783, 2618506, 2623236, 2627976, 2632724, 2637480, 2642245, 2647019, 2651802, 2656593, 2661392, 2666201, 2671018, 2675843, 2680678, 2685521, 2690373, 2695234, 2700103, 2704981, 2709868, 2714764, 2719669, 2724583, 2729505, 2734437, 2739377, 2744326, 2749284, 2754252, 2759228, 2764213, 2769207, 2774210, 2779222, 2784243, 2789274, 2794313, 2799362, 2804419, 2809486, 2814562, 2819647, 2824741, 2829845, 2834957, 2840079, 2845210, 2850351, 2855501, 2860660, 2865828, 2871006, 2876193, 2881389, 2886595, 2891810, 2897035, 2902269, 2907512, 2912765, 2918028, 2923300, 2928581, 2933873, 2939173, 2944483, 2949803, 2955133, 2960472, 2965820, 2971179, 2976547, 2981924, 2987312, 2992709, 2998116, 3003533, 3008959, 3014395, 3019842, 3025298, 3030763, 3036239, 3041725, 3047220, 3052725, 3058241, 3063766, 3069301, 3074847, 3080402, 3085967, 3091543, 3097128, 3102724, 3108330, 3113946, 3119571, 3125208, 3130854, 3136510, 3142177, 3147854, 3153541, 3159239, 3164947, 3170665, 3176393, 3182132, 3187881, 3193641, 3199411, 3205191, 3210982, 3216783, 3222595, 3228417, 3234250, 3240093, 3245947, 3251812, 3257687, 3263572, 3269469, 3275376, 3281293, 3287222, 3293161, 3299110, 3305071, 3311042, 3317024, 3323017, 3329021, 3335035, 3341061, 3347097, 3353144, 3359202, 3365271, 3371351, 3377443, 3383545, 3389658, 3395782, 3401917, 3408063, 3414220, 3420389, 3426569, 3432759, 3438961, 3445174, 3451399, 3457635, 3463881, 3470140, 3476409, 3482690, 3488982, 3495286, 3501601, 3507927, 3514265, 3520614, 3526975, 3533347, 3539731, 3546126, 3552533, 3558951, 3565381, 3571823, 3578276, 3584741, 3591217, 3597705, 3604205, 3610717, 3617241, 3623776, 3630323, 3636882, 3643453, 3650035, 3656630, 3663236, 3669855, 3676485, 3683127, 3689782, 3696448, 3703126, 3709817, 3716519, 3723234, 3729961, 3736700, 3743451, 3750214, 3756989, 3763777, 3770577, 3777390, 3784214, 3791051, 3797900, 3804762, 3811636, 3818523, 3825422, 3832333, 3839257, 3846193, 3853142, 3860104, 3867078, 3874064, 3881064, 3888076, 3895100, 3902137, 3909187, 3916250, 3923326, 3930414, 3937515, 3944629, 3951756, 3958895, 3966048, 3973213, 3980392, 3987583, 3994787, 4002005, 4009235, 4016479, 4023735, 4031005, 4038288, 4045584, 4052893, 4060215, 4067551, 4074900, 4082262, 4089637, 4097026, 4104428, 4111844, 4119273, 4126715, 4134171, 4141640, 4149123, 4156619, 4164129, 4171652, 4179189, 4186739, 4194304, 4201881, 4209473, 4217078, 4224697, 4232330, 4239976, 4247637, 4255311, 4262999, 4270701, 4278417, 4286147, 4293891, 4301648, 4309420, 4317206, 4325006, 4332820, 4340648, 4348490, 4356347, 4364217, 4372102, 4380001, 4387915, 4395842, 4403784, 4411741, 4419711, 4427696, 4435696, 4443710, 4451738, 4459781, 4467839, 4475911, 4483997, 4492099, 4500215, 4508345, 4516490, 4524650, 4532825, 4541014, 4549219, 4557438, 4565672, 4573920, 4582184, 4590463, 4598756, 4607065, 4615389, 4623727, 4632081, 4640450, 4648834, 4657233, 4665647, 4674076, 4682521, 4690981, 4699456, 4707947, 4716452, 4724974, 4733510, 4742062, 4750630, 4759213, 4767811, 4776425, 4785055, 4793700, 4802361, 4811037, 4819729, 4828437, 4837161, 4845900, 4854655, 4863426, 4872213, 4881015, 4889834, 4898668, 4907519, 4916385, 4925268, 4934166, 4943081, 4952011, 4960958, 4969921, 4978900, 4987896, 4996907, 5005935, 5014979, 5024040, 5033117, 5042210, 5051320, 5060446, 5069589, 5078748, 5087924, 5097116, 5106325, 5115551, 5124793, 5134052, 5143328, 5152620, 5161930, 5171256, 5180599, 5189958, 5199335, 5208729, 5218139, 5227567, 5237012, 5246473, 5255952, 5265448, 5274961, 5284491, 5294039, 5303604, 5313186, 5322785, 5332402, 5342036, 5351687, 5361356, 5371042, 5380746, 5390468, 5400207, 5409963, 5419737, 5429529, 5439339, 5449166, 5459011, 5468874, 5478755, 5488653, 5498569, 5508504, 5518456, 5528426, 5538414, 5548421, 5558445, 5568487, 5578548, 5588627, 5598724, 5608839, 5618972, 5629124, 5639294, 5649483, 5659690, 5669915, 5680159, 5690421, 5700702, 5711002, 5721320, 5731656, 5742012, 5752386, 5762779, 5773190, 5783621, 5794070, 5804538, 5815025, 5825531, 5836056, 5846600, 5857163, 5867746, 5878347, 5888967, 5899607, 5910266, 5920944, 5931641, 5942358, 5953094, 5963849, 5974624, 5985419, 5996232, 6007066, 6017919, 6028791, 6039684, 6050596, 6061527, 6072479, 6083450, 6094441, 6105451, 6116482, 6127533, 6138603, 6149694, 6160805, 6171935, 6183086, 6194257, 6205448, 6216660, 6227892, 6239143, 6250416, 6261708, 6273021, 6284355, 6295709, 6307083, 6318478, 6329894, 6341330, 6352787, 6364265, 6375763, 6387282, 6398822, 6410383, 6421964, 6433567, 6445190, 6456835, 6468501, 6480187, 6491895, 6503624, 6515374, 6527145, 6538938, 6550752, 6562587, 6574444, 6586322, 6598221, 6610142, 6622085, 6634049, 6646035, 6658042, 6670071, 6682122, 6694195, 6706289, 6718405, 6730543, 6742703, 6754886, 6767090, 6779316, 6791564, 6803834, 6816127, 6828441, 6840778, 6853138, 6865519, 6877923, 6890349, 6902798, 6915270, 6927763, 6940280, 6952819, 6965380, 6977965, 6990572, 7003202, 7015854, 7028530, 7041229, 7053950, 7066694, 7079462, 7092252, 7105066, 7117902, 7130762, 7143646, 7156552, 7169482, 7182435, 7195411, 7208411, 7221435, 7234482, 7247552, 7260646, 7273764, 7286906, 7300071, 7313260, 7326473, 7339710, 7352970, 7366255, 7379564, 7392896, 7406253, 7419634, 7433039, 7446468, 7459922, 7473400, 7486902, 7500428, 7513979, 7527555, 7541155, 7554780, 7568429, 7582103, 7595801, 7609525, 7623273, 7637046, 7650844, 7664666, 7678514, 7692387, 7706285, 7720208, 7734156, 7748129, 7762128, 7776152, 7790201, 7804275, 7818375, 7832501, 7846652, 7860828, 7875030, 7889258, 7903512, 7917791, 7932096, 7946427, 7960784, 7975167, 7989575, 8004010, 8018471, 8032958, 8047471, 8062011, 8076576, 8091168, 8105786, 8120431, 8135102, 8149800, 8164524, 8179275, 8194053, 8208857, 8223688, 8238546, 8253430, 8268342, 8283280, 8298246, 8313238, 8328258, 8343304, 8358378, 8373479, 8388608, 8403763, 8418946, 8434157, 8449395, 8464660, 8479953, 8495274, 8510623, 8525999, 8541403, 8556834, 8572294, 8587782, 8603297, 8618841, 8634412, 8650012, 8665640, 8681296, 8696981, 8712694, 8728435, 8744205, 8760003, 8775830, 8791685, 8807569, 8823482, 8839423, 8855393, 8871392, 8887420, 8903477, 8919563, 8935678, 8951822, 8967995, 8984198, 9000430, 9016691, 9032981, 9049301, 9065650, 9082029, 9098438, 9114876, 9131344, 9147841, 9164369, 9180926, 9197513, 9214130, 9230778, 9247455, 9264162, 9280900, 9297668, 9314466, 9331294, 9348153, 9365042, 9381962, 9398913, 9415894, 9432905, 9449948, 9467021, 9484125, 9501260, 9518426, 9535623, 9552851, 9570110, 9587400, 9604722, 9622075, 9639459, 9656875, 9674322, 9691800, 9709311, 9726852, 9744426, 9762031, 9779668, 9797337, 9815038, 9832771, 9850536, 9868333, 9886162, 9904023, 9921917, 9939843, 9957801, 9975792, 9993815, 10011871, 10029959, 10048081, 10066234, 10084421, 10102641, 10120893, 10139178, 10157497, 10175849, 10194233, 10212651, 10231102, 10249587, 10268105, 10286656, 10305241, 10323860, 10342512, 10361198, 10379917, 10398671, 10417458, 10436279, 10455134, 10474024, 10492947, 10511905, 10530897, 10549923, 10568983, 10588078, 10607208, 10626372, 10645571, 10664804, 10684072, 10703375, 10722713, 10742085, 10761493, 10780936, 10800414, 10819927, 10839475, 10859059, 10878678, 10898333, 10918023, 10937748, 10957510, 10977306, 10997139, 11017008, 11036912, 11056853, 11076829, 11096842, 11116890, 11136975, 11157096, 11177254, 11197448, 11217678, 11237945, 11258249, 11278589, 11298966, 11319380, 11339831, 11360318, 11380843, 11401405, 11422004, 11442640, 11463313, 11484024, 11504772, 11525558, 11546381, 11567242, 11588141, 11609077, 11630051, 11651063, 11672113, 11693201, 11714327, 11735492, 11756694, 11777935, 11799214, 11820532, 11841888, 11863283, 11884716, 11906188, 11927699, 11949249, 11970838, 11992465, 12014132, 12035838, 12057583, 12079368, 12101192, 12123055, 12144958, 12166900, 12188882, 12210903, 12232965, 12255066, 12277207, 12299389, 12321610, 12343871, 12366173, 12388515, 12410897, 12433320, 12455784, 12478287, 12500832, 12523417, 12546043, 12568710, 12591418, 12614167, 12636957, 12659788, 12682661, 12705575, 12728530, 12751526, 12774565, 12797644, 12820766, 12843929, 12867134, 12890381, 12913670, 12937002, 12960375, 12983790, 13007248, 13030748, 13054291, 13077876, 13101504, 13125175, 13148888, 13172644, 13196443, 13220285, 13244170, 13268098, 13292070, 13316085, 13340143, 13364244, 13388390, 13412579, 13436811, 13461087, 13485407, 13509772, 13534180, 13558632, 13583128, 13607669, 13632254, 13656883, 13681557, 13706276, 13731039, 13755847, 13780699, 13805597, 13830540, 13855527, 13880560, 13905638, 13930761, 13955930, 13981144, 14006404, 14031709, 14057061, 14082458, 14107900, 14133389, 14158924, 14184505, 14210132, 14235805, 14261525, 14287292, 14313104, 14338964, 14364870, 14390823, 14416823, 14442870, 14468964, 14495105, 14521293, 14547529, 14573812, 14600143, 14626521, 14652946, 14679420, 14705941, 14732510, 14759128, 14785793, 14812506, 14839268, 14866078, 14892937, 14919844, 14946800, 14973804, 15000857, 15027959, 15055110, 15082310, 15109560, 15136858, 15164206, 15191603, 15219050, 15246546, 15274092, 15301688, 15329333, 15357029, 15384774, 15412570, 15440416, 15468312, 15496259, 15524256, 15552304, 15580402, 15608551, 15636751, 15665002, 15693304, 15721657, 15750061, 15778517, 15807024, 15835583, 15864193, 15892855, 15921568, 15950334, 15979151, 16008021, 16036943, 16065917, 16094943, 16124022, 16153153, 16182337, 16211573, 16240863, 16270205, 16299601, 16329049, 16358551, 16388106, 16417714, 16447376, 16477092, 16506861, 16536684, 16566561, 16596492, 16626476, 16656516, 16686609, 16716757, 16746959, 16777216, 16807527, 16837893, 16868314, 16898790, 16929321, 16959907, 16990549, 17021246, 17051998, 17082806, 17113669, 17144589, 17175564, 17206595, 17237682, 17268825, 17300025, 17331281, 17362593, 17393962, 17425388, 17456871, 17488410, 17520006, 17551660, 17583370, 17615138, 17646964, 17678846, 17710787, 17742785, 17774841, 17806954, 17839126, 17871356, 17903645, 17935991, 17968396, 18000860, 18033382, 18065963, 18098602, 18131301, 18164059, 18196876, 18229752, 18262688, 18295683, 18328738, 18361853, 18395027, 18428261, 18461556, 18494910, 18528325, 18561800, 18595336, 18628932, 18662589, 18696307, 18730085, 18763925, 18797826, 18831788, 18865811, 18899896, 18934042, 18968251, 19002521, 19036852, 19071246, 19105702, 19140221, 19174801, 19209444, 19244150, 19278919, 19313750, 19348644, 19383601, 19418622, 19453705, 19488852, 19524063, 19559337, 19594675, 19630077, 19665542, 19701072, 19736666, 19772324, 19808047, 19843834, 19879686, 19915603, 19951584, 19987631, 20023742, 20059919, 20096162, 20132469, 20168843, 20205282, 20241787, 20278357, 20314994, 20351698, 20388467, 20425303, 20462205, 20499174, 20536210, 20573313, 20610483, 20647720, 20685024, 20722396, 20759835, 20797342, 20834916, 20872559, 20910269, 20948048, 20985895, 21023810, 21061794, 21099846, 21137967, 21176157, 21214416, 21252744, 21291142, 21329608, 21368144, 21406750, 21445426, 21484171, 21522987, 21561872, 21600828, 21639855, 21678951, 21718119, 21757357, 21796666, 21836046, 21875497, 21915020, 21954613, 21994279, 22034016, 22073825, 22113706, 22153659, 22193684, 22233781, 22273951, 22314193, 22354508, 22394896, 22435357, 22475891, 22516498, 22557179, 22597933, 22638760, 22679662, 22720637, 22761687, 22802810, 22844008, 22885280, 22926627, 22968049, 23009545, 23051117, 23092763, 23134485, 23176282, 23218155, 23260103, 23302127, 23344227, 23386403, 23428655, 23470984, 23513389, 23555870, 23598429, 23641064, 23683776, 23726566, 23769433, 23812377, 23855399, 23898498, 23941676, 23984931, 24028265, 24071677, 24115167, 24158736, 24202384, 24246110, 24289916, 24333800, 24377764, 24421807, 24465930, 24510133, 24554415, 24598778, 24643220, 24687743, 24732347, 24777031, 24821795, 24866641, 24911568, 24956575, 25001664, 25046835, 25092087, 25137421, 25182837, 25228335, 25273915, 25319577, 25365322, 25411150, 25457060, 25503053, 25549130, 25595289, 25641532, 25687859, 25734269, 25780763, 25827341, 25874004, 25920750, 25967581, 26014497, 26061497, 26108583, 26155753, 26203009, 26250350, 26297776, 26345288, 26392886, 26440571, 26488341, 26536197, 26584140, 26632170, 26680286, 26728489, 26776780, 26825158, 26873623, 26922175, 26970815, 27019544, 27068360, 27117264, 27166257, 27215338, 27264508, 27313767, 27363115, 27412552, 27462078, 27511694, 27561399, 27611195, 27661080, 27711055, 27761121, 27811277, 27861523, 27911861, 27962289, 28012809, 28063419, 28114122, 28164916, 28215801, 28266779, 28317848, 28369010, 28420264, 28471611, 28523051, 28574584, 28626209, 28677928, 28729741, 28781647, 28833647, 28885740, 28937928, 28990211, 29042587, 29095058, 29147625, 29200286, 29253042, 29305893, 29358840, 29411883, 29465021, 29518256, 29571586, 29625013, 29678537, 29732157, 29785874, 29839689, 29893600, 29947609, 30001715, 30055919, 30110221, 30164621, 30219120, 30273717, 30328412, 30383207, 30438100, 30493093, 30548185, 30603376, 30658667, 30714058, 30769549, 30825141, 30880832, 30936625, 30992518, 31048512, 31104608, 31160804, 31217103, 31273503, 31330005, 31386609, 31443315, 31500123, 31557035, 31614049, 31671166, 31728386, 31785710, 31843137, 31900668, 31958303, 32016042, 32073886, 32131834, 32189886, 32248044, 32306306, 32364674, 32423147, 32481726, 32540411, 32599202, 32658099, 32717102, 32776212, 32835429, 32894753, 32954184, 33013722, 33073368, 33133122, 33192984, 33252953, 33313032, 33373218, 33433514, 33493918, 33554432, 33615054, 33675787, 33736629, 33797581, 33858643, 33919815, 33981098, 34042492, 34103997, 34165612, 34227339, 34289178, 34351128, 34413190, 34475365, 34537651, 34600051, 34662563, 34725187, 34787925, 34850777, 34913742, 34976820, 35040013, 35103320, 35166741, 35230277, 35293928, 35357693, 35421574, 35485570, 35549682, 35613909, 35678253, 35742713, 35807290, 35871983, 35936793, 36001720, 36066764, 36131926, 36197205, 36262603, 36328119, 36393753, 36459505, 36525377, 36591367, 36657477, 36723706, 36790055, 36856523, 36923112, 36989821, 37056650, 37123601, 37190672, 37257864, 37325178, 37392614, 37460171, 37527850, 37595652, 37663576, 37731623, 37799793, 37868085, 37936502, 38005042, 38073705, 38142493, 38211405, 38280442, 38349603, 38418889, 38488301, 38557838, 38627500, 38697289, 38767203, 38837244, 38907411, 38977705, 39048126, 39118674, 39189350, 39260154, 39331085, 39402144, 39473332, 39544649, 39616094, 39687669, 39759372, 39831206, 39903169, 39975262, 40047485, 40119839, 40192324, 40264939, 40337686, 40410564, 40483574, 40556715, 40629989, 40703396, 40776934, 40850606, 40924411, 40998349, 41072421, 41146626, 41220966, 41295440, 41370049, 41444792, 41519670, 41594684, 41669833, 41745118, 41820539, 41896096, 41971790, 42047620, 42123588, 42199692, 42275935, 42352315, 42428833, 42505489, 42582284, 42659217, 42736289, 42813501, 42890852, 42968343, 43045974, 43123745, 43201657, 43279710, 43357903, 43436238, 43514714, 43593332, 43672092, 43750995, 43830040, 43909227, 43988558, 44068032, 44147650, 44227412, 44307318, 44387368, 44467562, 44547902, 44628387, 44709017, 44789793, 44870714, 44951782, 45032997, 45114358, 45195866, 45277521, 45359324, 45441275, 45523374, 45605621, 45688017, 45770561, 45853255, 45936098, 46019091, 46102234, 46185527, 46268970, 46352564, 46436310, 46520206, 46604254, 46688454, 46772806, 46857311, 46941968, 47026778, 47111741, 47196858, 47282129, 47367553, 47453132, 47538866, 47624754, 47710798, 47796997, 47883352, 47969863, 48056530, 48143354, 48230335, 48317472, 48404768, 48492221, 48579832, 48667601, 48755529, 48843615, 48931861, 49020266, 49108831, 49197556, 49286441, 49375487, 49464694, 49554062, 49643591, 49733282, 49823136, 49913151, 50003329, 50093670, 50184175, 50274842, 50365674, 50456670, 50547830, 50639155, 50730644, 50822300, 50914120, 51006107, 51098260, 51190579, 51283065, 51375718, 51468539, 51561527, 51654683, 51748008, 51841501, 51935163, 52028994, 52122995, 52217166, 52311507, 52406018, 52500700, 52595553, 52690577, 52785773, 52881142, 52976682, 53072395, 53168281, 53264340, 53360573, 53456979, 53553560, 53650316, 53747246, 53844351, 53941631, 54039088, 54136720, 54234529, 54332515, 54430677, 54529017, 54627535, 54726231, 54825104, 54924157, 55023389, 55122799, 55222390, 55322160, 55422111, 55522242, 55622554, 55723047, 55823722, 55924579, 56025618, 56126839, 56228244, 56329832, 56431603, 56533558, 56635697, 56738021, 56840529, 56943223, 57046103, 57149168, 57252419, 57355857, 57459482, 57563294, 57667294, 57771481, 57875857, 57980422, 58085175, 58190117, 58295250, 58400572, 58506084, 58611787, 58717681, 58823766, 58930043, 59036512, 59143173, 59250027, 59357075, 59464315, 59571749, 59679378, 59787200, 59895218, 60003431, 60111839, 60220443, 60329243, 60438240, 60547434, 60656825, 60766414, 60876201, 60986186, 61096370, 61206753, 61317335, 61428117, 61539099, 61650282, 61761665, 61873250, 61985037, 62097025, 62209216, 62321609, 62434206, 62547006, 62660010, 62773218, 62886630, 63000247, 63114070, 63228098, 63342332, 63456773, 63571420, 63686275, 63801337, 63916607, 64032085, 64147772, 64263668, 64379773, 64496088, 64612613, 64729349, 64846295, 64963453, 65080823, 65198404, 65316198, 65434205, 65552425, 65670859, 65789507, 65908368, 66027445, 66146737, 66266244, 66385968, 66505907, 66626064, 66746437, 66867028, 66987837, 67108864, 67230109, 67351574, 67473258, 67595162, 67717286, 67839631, 67962197, 68084984, 68207994, 68331225, 68454679, 68578356, 68702257, 68826381, 68950730, 69075303, 69200102, 69325126, 69450375, 69575851, 69701554, 69827484, 69953641, 70080027, 70206640, 70333483, 70460554, 70587856, 70715387, 70843148, 70971141, 71099364, 71227819, 71356507, 71485427, 71614580, 71743966, 71873586, 72003440, 72133528, 72263852, 72394411, 72525206, 72656238, 72787506, 72919011, 73050754, 73182735, 73314954, 73447412, 73580110, 73713047, 73846224, 73979642, 74113301, 74247202, 74381345, 74515729, 74650357, 74785228, 74920342, 75055701, 75191304, 75327152, 75463246, 75599586, 75736171, 75873004, 76010084, 76147411, 76284987, 76422811, 76560884, 76699207, 76837779, 76976602, 77115676, 77255001, 77394578, 77534407, 77674488, 77814823, 77955411, 78096253, 78237349, 78378701, 78520308, 78662170, 78804289, 78946665, 79089298, 79232189, 79375338, 79518745, 79662412, 79806338, 79950524, 80094971, 80239679, 80384648, 80529879, 80675372, 80821128, 80967148, 81113431, 81259979, 81406792, 81553869, 81701213, 81848822, 81996699, 82144842, 82293253, 82441933, 82590881, 82740098, 82889584, 83039341, 83189368, 83339667, 83490236, 83641078, 83792193, 83943580, 84095241, 84247176, 84399385, 84551870, 84704630, 84857666, 85010978, 85164568, 85318434, 85472579, 85627003, 85781705, 85936687, 86091949, 86247491, 86403315, 86559420, 86715807, 86872476, 87029429, 87186665, 87344185, 87501990, 87660080, 87818455, 87977117, 88136065, 88295301, 88454824, 88614636, 88774736, 88935125, 89095804, 89256774, 89418034, 89579586, 89741429, 89903565, 90065994, 90228716, 90391733, 90555043, 90718649, 90882551, 91046748, 91211243, 91376034, 91541123, 91706511, 91872197, 92038183, 92204468, 92371054, 92537941, 92705129, 92872620, 93040413, 93208509, 93376909, 93545613, 93714622, 93883936, 94053556, 94223483, 94393717, 94564258, 94735107, 94906265, 95077732, 95249509, 95421597, 95593995, 95766705, 95939727, 96113061, 96286709, 96460670, 96634945, 96809536, 96984442, 97159664, 97335202, 97511058, 97687231, 97863723, 98040533, 98217663, 98395113, 98572883, 98750975, 98929389, 99108124, 99287183, 99466565, 99646272, 99826303, 100006659, 100187341, 100368350, 100549685, 100731349, 100913340, 101095660, 101278310, 101461289, 101644600, 101828241, 102012214, 102196520, 102381158, 102566130, 102751437, 102937078, 103123054, 103309367, 103496016, 103683002, 103870327, 104057989, 104245991, 104434332, 104623014, 104812036, 105001400, 105191106, 105381155, 105571547, 105762284, 105953365, 106144791}
static const uint32_t expoTable[4096] = expotable10oct;

#endif /* INC_TABLES_H_ */