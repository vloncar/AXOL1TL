#ifndef __ADT_SCALES_H
#define __ADT_SCALES_H

#include "NN/GTADModel_v1.h"

//N_INPUT_1_1=AD_NNNINPUTS
typedef ap_fixed<5,5> ad_shift_t;
typedef ap_fixed<10,9> ad_offset_t;

static const ad_shift_t ad_shift[N_INPUT_1_1] = {
  4, 0, 5, 2, 5, 6, 1, 5, 6, 0, 5, 6, 0, 5, 5, 0, 6, 7, -1, 0, 0, -1,
  0, 0, -1, 0, 0, 4, 5, 6, 3, 5, 6, 3, 5, 6, 3, 4, 6, 3, 4, 5, 2, 4,
  5, 2, 3, 5, 1, 0, 4, -1, 0, 0, -1, 0, 0};

static const ad_offset_t ad_offsets[N_INPUT_1_1] = {
  21., 0., 36., 5., 0., 34., 3., 0., 33.5, 2., 0.5,
  32., 1.5, -3., 31., 2., 0.5, 80., 0., 0., 0., 0.,
  0., 0., 0., 0., 0., 26.5, 0., 35., 15.5, 0., 34.,
  12., 0.5, 34., 10., 0.5, 33., 8.5, 0., 32., 7., 0.5,
  29., 5., 0.5, 24., 3., 0., 15., 0., 0., 0., 0.,
  0., 0.};

#endif
