//Numpy array shape [57, 32]
//Min -4.000000000000
//Max 3.875000000000
//Number of zeros 1405

#ifndef W2_H_
#define W2_H_

#ifdef LOAD_WEIGHTS_FROM_TXT
weight2_t w2[1824];
#else
weight2_t w2[1824] = {0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.125, 0.000, -0.125, 0.000, -0.125, 0.000, 0.000, 0.125, 0.000, 0.000, 0.000, 0.125, 0.000, 0.000, 0.000, 0.000, -0.125, 0.000, 0.000, 0.125, 0.000, 0.000, 0.125, 0.000, 0.000, -0.250, 0.000, -0.125, -0.250, 0.125, -0.125, 0.125, 0.125, -0.250, 0.000, -0.125, 0.000, 0.250, 0.000, 0.000, -0.125, -0.250, 0.125, 0.000, 0.000, -0.250, -0.250, 0.125, 0.250, 0.000, -0.125, -0.250, -0.250, 0.125, 0.125, -0.125, 0.125, 0.000, 0.000, 0.125, -0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, -0.125, 0.000, 0.125, 0.000, 0.125, 0.000, 0.000, 0.000, 0.000, 0.125, 0.000, 0.000, 0.000, 0.125, 0.000, 0.000, 0.000, -0.125, 0.125, 0.000, 0.000, 0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.375, 0.125, -0.125, 0.000, -0.250, -0.125, 0.000, 0.375, -0.250, 0.125, 0.125, 0.250, 0.125, 0.000, -0.125, 0.250, 0.375, 0.125, -0.125, 0.375, 0.000, 0.000, 0.125, 0.000, -0.125, 0.250, 0.125, -0.375, 0.500, -0.500, 0.000, -0.250, 0.750, -0.375, 0.000, -0.125, 0.125, -0.250, 0.125, 0.000, -0.250, 0.500, 0.375, -0.750, -0.750, 0.500, 0.625, 0.500, 0.875, 0.250, -0.375, 0.250, 0.125, 0.125, 0.250, 0.375, 0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, -0.125, -0.125, 0.000, 0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, -0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.125, 0.250, -0.125, -0.125, 0.125, 0.000, 0.000, -0.250, 0.000, 0.250, 0.000, -0.125, -0.125, 0.625, -0.500, 0.125, -0.250, -0.375, -0.250, 0.125, 0.125, -0.250, -0.125, 0.250, 0.000, 0.625, 0.000, -0.250, 0.000, 0.000, -0.125, -0.125, -0.125, -0.375, 0.125, 0.000, 0.125, 0.000, -0.250, 0.000, 0.125, 0.875, 0.000, -0.125, 0.125, -1.375, 0.500, -0.625, 0.125, 0.125, 0.000, 0.000, -0.125, 0.000, 0.125, -0.625, 0.125, 2.000, 0.125, 0.125, 0.000, 0.000, 0.125, 0.250, 0.000, 0.000, 0.000, 0.000, -0.125, 0.000, -0.125, 0.125, 0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.125, 0.000, 0.125, 0.000, 0.000, 0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.125, 0.000, 0.375, -0.250, -0.125, 0.375, -0.125, 0.000, -0.625, -0.125, 0.125, 0.125, 0.000, -0.375, -0.250, -0.500, 0.375, -0.500, -0.500, -0.250, 0.125, 0.125, -0.500, -0.125, 0.375, -0.250, 0.000, 0.250, 0.125, -0.125, 0.000, -0.625, -0.250, 0.000, 0.125, 0.000, 0.125, 0.125, -0.125, -0.125, -0.375, 0.000, -0.625, 0.000, 0.375, 0.125, -0.125, 0.250, 1.250, 0.125, -0.125, 0.125, 0.375, 0.000, 0.375, 0.000, -1.000, 0.000, 0.625, -0.625, -0.875, 0.000, 0.000, -0.125, 0.250, 0.000, 0.000, 0.000, 0.000, -0.125, 0.000, 0.000, 0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.125, 0.125, 0.125, 0.000, 0.000, 0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, -0.125, 0.125, 0.250, 0.000, 0.125, 0.125, 0.000, -0.125, 0.125, -0.125, 0.000, -0.125, 0.125, -0.125, 0.500, 0.750, -0.125, 0.000, 0.125, 0.000, -0.125, 0.000, 0.250, -0.125, 0.000, 0.125, 0.250, 0.000, 0.125, 0.125, 0.125, 0.125, -0.125, 0.125, -0.125, 0.000, 0.375, 0.000, 0.125, 0.000, 0.000, 0.125, 0.000, 0.250, 0.250, 0.000, 2.125, -2.250, 0.125, 0.000, -0.750, 0.000, 0.125, 0.125, -0.750, -0.125, -0.125, -0.125, -0.625, 0.000, -0.375, 0.250, 0.500, -0.125, -0.125, 0.000, 0.125, 0.000, -0.125, 0.125, 0.125, -0.125, 0.125, 0.125, 0.125, 0.125, 0.000, 0.000, 0.000, -0.125, 0.000, 0.125, 0.000, 0.125, 0.125, 0.125, 0.000, 0.000, 0.125, 0.000, 0.000, 0.000, 0.000, -0.125, 0.125, 0.000, -0.125, 0.125, 0.125, 0.000, -0.125, 0.125, 0.000, 0.000, 0.000, -0.125, -0.125, 0.500, -0.125, 0.000, -0.125, 0.000, 0.250, 0.375, -0.375, 0.125, 0.125, 0.000, 0.000, -0.125, -0.375, 0.000, -0.250, 0.000, -0.125, 0.625, 0.375, -0.250, -0.125, 0.250, 0.250, 0.125, 0.125, 0.625, -0.500, -0.500, 0.125, 0.375, -0.500, 2.500, 0.250, -1.125, 0.000, 0.000, -0.125, -2.000, 0.000, 0.250, 0.500, -0.125, 0.000, -0.125, -0.250, -0.250, 0.500, 0.125, -0.125, -0.125, -2.000, 0.250, 0.000, 1.250, -2.000, 0.250, -0.250, 0.125, 0.250, -0.250, 0.000, 0.000, 0.500, 0.000, 0.000, 0.000, 0.125, 0.125, 0.125, -0.125, 0.125, 0.250, 0.125, 0.125, 0.000, -0.250, 0.250, 0.250, -0.125, 0.125, 0.250, -0.125, 0.000, 0.125, -0.125, 0.250, 0.250, 0.000, 0.375, 0.000, -0.125, 0.000, 0.125, -0.125, 0.000, 0.125, 0.000, 0.000, -0.500, 0.500, 1.125, 0.125, 0.250, -0.125, 0.125, 0.000, -0.625, 0.000, 0.000, 0.000, -0.250, 0.000, -1.500, -0.250, -0.125, 0.125, 0.000, -0.125, -0.125, 0.000, 0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.125, 0.000, -0.250, -0.250, 0.000, 0.000, -0.125, -0.125, 0.000, 0.000, 0.125, 0.000, 0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, -0.125, 0.000, 0.000, 0.000, -0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, -0.125, 0.000, -0.250, -0.125, 0.000, -0.125, 0.000, 0.000, 0.000, 0.000, -0.625, 0.000, 0.000, 0.000, -0.125, 0.000, -0.750, -0.125, -0.125, 0.000, 0.000, 0.000, 0.000, 0.000, -0.625, -0.125, 0.000, 0.000, 0.250, 0.250, -0.250, 0.500, -0.125, 0.000, -2.500, -0.125, -0.250, 0.625, 0.750, -0.375, 0.000, -0.125, -0.375, 0.750, 1.125, -0.250, -1.000, -0.250, -3.250, -0.250, -0.375, 0.000, 0.250, 0.250, -0.125, 0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.125, 0.000, 0.000, 0.000, 0.000, -0.250, 0.000, 0.000, -0.125, 0.000, 0.000, 0.000, 0.000, 0.000, -0.125, 0.000, 0.000, -0.125, 0.000, 0.750, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.125, 0.000, -0.125, 0.000, 0.000, 0.000, 0.000, 0.000, -2.750, -0.125, 0.000, 0.125, 0.000, 0.000, 0.000, 0.000, -0.625, -0.125, 0.000, 0.125, -1.875, 0.000, -3.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, -0.125, -0.250, 0.125, -0.125, 0.375, 0.000, -0.375, 0.000, 0.000, 0.125, -4.000, -0.125, -0.125, 0.250, 0.125, -1.375, -0.125, 0.125, -0.875, 0.000, 0.250, 0.000, -2.500, 0.000, -3.125, -0.250, -2.250, 0.000, 0.125, -0.125, -0.250, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, -1.750, 0.000, 0.000, 0.000, 0.000, 0.250, 0.000, 0.000, 0.625, 0.000, 0.000, 0.000, 0.625, 0.000, -3.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, -0.125, 0.000, 0.000, 0.125, -0.125, 0.000, 0.000, 0.000, -0.125, -0.125, -3.750, 0.000, 0.125, 0.000, 0.000, -1.375, 0.000, 0.000, -0.750, 0.000, 0.000, -0.125, -3.375, 0.000, -3.000, 0.000, -2.250, 0.000, 0.000, 0.125, 0.125, 0.125, 0.125, -0.375, -0.250, 0.500, -0.375, -0.125, -0.250, -0.125, 0.000, 0.125, -0.125, 0.000, 0.000, -0.250, -0.125, 1.375, -0.125, 0.625, -0.250, 0.875, -0.125, 0.625, 0.000, 0.000, -0.125, -0.125, 0.000, 0.125, -0.250, -0.375, -0.250, 0.625, 1.000, -0.750, 0.500, 1.625, 1.125, -0.125, -0.375, -0.375, -0.250, 0.000, -0.375, 0.125, 0.125, -0.125, -0.125, 3.875, -0.500, -4.000, 0.875, -2.375, -0.625, -3.375, -0.625, 1.625, 0.000, 0.500, 0.250, 1.625, 0.125, -0.625, -0.125, -2.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.125, -0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.125, 0.125, 0.000, 0.000, -0.125, 0.000, 0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, -0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, -0.125, 1.000, 0.250, 0.250, 0.250, -0.125, -0.625, -0.125, 0.000, 0.375, 0.000, -0.250, 0.000, -0.125, 0.000, 0.000, 0.125, -0.125, 0.125, 0.125, -0.125, -0.125, 0.000, 0.125, -0.125, -0.375, 0.000, 0.125, -0.250, -0.250, 0.250, 0.625, 0.000, -3.250, 1.750, -1.125, 2.375, -0.125, 0.250, -0.250, 0.000, 2.000, 0.000, 0.000, 0.000, 0.125, -0.125, 0.125, -0.750, -0.125, 0.250, -1.000, 0.125, -0.125, -0.125, 1.125, 0.000, 0.250, 0.125, -2.250, 0.000, 1.000, -1.375, 1.625, -0.125, 0.125, 0.000, -0.125, 0.125, 0.000, 0.000, 0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.125, 0.125, 0.000, -0.125, 0.000, 0.000, -0.125, 0.000, 0.000, -0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.125, -0.375, 0.000, 0.125, -0.125, 0.000, 1.625, -0.250, 0.000, 0.500, -0.125, 0.000, -0.125, -0.250, 0.000, -0.125, 0.125, 0.000, -0.125, 0.125, 0.000, 0.000, 0.125, -0.250, 0.000, -0.125, 0.000, 0.500, -0.125, 0.750, -0.250, -0.125, 0.125, 0.875, 1.000, 0.750, 0.875, -0.125, 1.875, -0.125, 0.000, -1.250, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, -0.750, -0.125, 0.125, 0.000, 0.000, -0.125, -0.125, -0.125, 0.000, 0.125, -0.125, -1.125, 0.000, -1.500, -0.250, 0.375, -0.125, 0.125, 0.125, -0.125, 0.000, 0.000, 0.000, 0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.125, 0.000, 0.125, 0.000, 0.125, 0.000, 0.000, 0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.125, 0.125, 0.000, 0.000, -0.125, -0.125, 0.125, 0.125, 0.000, 0.125, 0.000, 0.000, 0.125, 0.000, -0.125, 0.000, -0.125, 0.125, 0.000, -0.125, 0.000, 0.000, 0.125, 0.000, 0.000, 0.000, -0.125, 0.000, 0.000, 0.000, 0.125, 0.000, -0.125, -0.125, 0.000, -0.125, 0.000, 0.125, 0.125, 0.000, -0.125, 0.000, 0.000, 0.000, 0.000, 0.125, 0.000, 0.000, 0.125, 0.000, 0.000, -0.125, 0.125, -0.125, -0.125, 0.000, 0.000, -0.125, 0.125, 0.125, 0.000, 0.000, 0.125, 0.000, 0.000, -0.125, 0.000, 0.000, 0.125, 0.000, -0.125, 0.000, 0.125, 0.000, 0.000, 0.000, 0.000, 0.125, 0.000, 0.000, 0.125, 0.000, 0.125, 0.000, 0.125, 0.000, -0.125, 0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, -0.125, 0.125, 0.000, 0.000, -0.125, 0.125, 0.250, -0.125, 0.000, -0.125, 0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.125, 0.125, 0.000, 0.250, 0.625, 0.125, 0.000, -0.250, 0.250, 0.125, -0.125, 0.000, 0.000, 0.000, 0.250, 0.000, -0.125, 0.125, 0.250, 0.000, 0.000, 0.000, 0.125, 0.000, 0.125, 0.000, 0.000, 0.000, -0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.125, 0.125, 0.000, 0.000, 0.000, 0.000, 0.000, -0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, -0.125, 0.000, -0.125, 0.125, 0.000, -0.125, 0.000, 0.125, 0.125, 0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.125, 0.125, 0.000, -0.250, 0.000, 0.000, -0.125, 0.000, 0.250, 0.000, 0.125, 0.000, 0.125, 0.000, 0.000, -0.125, 0.125, 0.000, 0.000, 0.000, 0.000, 0.125, 0.000, 0.000, 0.500, 0.000, -0.125, -0.375, 0.000, 0.000, 0.250, -0.250, -0.250, -0.625, 0.125, 0.250, 0.125, -0.375, 0.000, -0.750, 0.125, -0.375, 0.125, -0.125, -0.500, -0.250, 0.000, 0.375, 0.000, 0.125, 0.000, 0.000, 0.000, -0.125, 0.000, 0.125, -0.125, 0.000, 0.000, 0.000, 0.000, 0.000, -0.250, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.125, 0.000, -0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.375, 0.000, -0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, -0.125, 0.000, 0.000, 0.000, 0.000, -0.125, 0.000, -0.125, 0.000, -0.750, 0.000, -0.125, 0.000, 0.125, 0.125, -0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.375, 0.000, 0.125, 0.125, 0.125, 0.125, -0.125, -0.750, 0.625, 0.125, -1.000, 0.000, -1.500, 0.375, -1.250, -0.125, 0.125, -0.125, -0.500, 0.125, -1.125, 0.000, -0.875, -0.125, -1.125, -0.250, -0.625, 0.000, 0.125, -0.125, 0.000, 0.000, -0.375, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.125, 0.500, 0.000, 0.000, 0.000, 0.375, -0.375, 0.250, 0.000, 0.125, 0.000, 0.000, 0.000, 0.000, 0.000, -0.125, 0.000, -0.250, -0.125, -0.125, 0.000, 0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, -0.125, -0.125, 0.000, -0.750, -0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, -0.375, 0.000, -0.500, 0.000, -1.000, 0.000, 0.000, -0.375, -0.500, 0.000, 0.000, 0.000, 0.000, 0.000, 0.125, 0.000, 0.125, 0.250, 0.000, 0.375, 0.000, -3.625, 0.000, 0.000, -3.500, 0.000, -0.750, -0.125, -1.500, -1.000, 0.000, -1.250, -0.250, -0.375, -3.250, 0.375, -2.250, 0.375, 0.250, -3.750, -3.375, 0.125, 0.125, 0.000, 0.125, -0.125, 0.000, 0.000, -0.125, 0.375, 0.000, -0.125, 0.000, 0.750, 0.000, 0.125, -0.875, 0.000, -0.125, 0.000, -0.250, -0.250, 0.000, 0.250, 0.375, 0.000, -0.250, -0.500, -0.250, 0.375, 0.000, -0.125, 0.000, 0.000, 0.000, -0.125, 0.125, 0.000, 0.000, 0.125, 0.000, -0.125, 0.000, 0.000, 0.000, -3.625, 0.000, 0.000, -3.125, 0.000, -1.000, 0.000, -0.875, 0.125, -0.125, 0.250, -0.875, 0.000, -2.375, 0.000, -2.250, 0.000, -0.375, -3.875, -3.500, 0.000, 0.125, 0.000, 0.000, 0.000, 0.000, -0.125, 0.375, -0.375, -0.250, 0.500, -0.125, -4.000, -0.125, 0.000, -4.000, 0.125, -4.000, 0.000, -3.625, -1.000, -0.375, -3.625, -0.625, -2.375, -3.500, 0.125, -4.000, 0.250, -0.375, -4.000, -4.000, -0.750, 0.375, -0.250, 0.500, -0.625, 0.125, 0.125, -0.375, 0.000, 0.000, 0.125, 0.000, -2.250, 0.000, 0.125, -2.375, 0.000, 0.375, -0.125, -0.625, 0.375, 0.000, -0.125, -0.500, -0.625, -2.750, -0.125, 1.000, -0.375, -0.125, -2.625, 2.000, -0.125, 0.000, 0.000, 0.500, 0.500, 0.000, 0.000, -0.125, 0.125, 0.000, 0.000, 0.000, -3.875, 0.125, 0.000, -4.000, 0.000, -4.000, 0.125, -3.625, -1.125, 0.000, -3.750, -1.000, -1.750, -2.875, 0.000, -3.875, 0.000, -0.625, -4.000, -4.000, 0.000, 0.000, 0.000, -0.250, -0.125, 0.125, 0.250, 0.125, -0.625, -1.750, 0.125, -0.375, -4.000, 0.125, -0.875, -4.000, -0.125, -4.000, -0.125, -4.000, -3.625, -1.000, -4.000, -0.625, -2.625, -4.000, 0.000, 1.125, 0.250, -2.375, -2.375, -4.000, -0.375, 0.125, 0.875, 0.125, -1.875, -0.125, -0.375, -0.375, -0.250, 0.375, 0.000, 0.000, 3.875, 0.000, -0.250, 3.875, 0.000, -4.000, 0.125, -2.375, 0.125, -0.125, -1.125, -0.625, 1.875, -3.375, 0.000, -0.875, 0.250, 0.125, -2.250, 3.875, 0.000, -0.125, 0.750, -0.125, 0.375, 0.125, -0.250, 0.000, 0.125, -2.125, 0.125, -1.125, -4.000, 0.000, 0.125, -4.000, 0.000, -4.000, -0.125, -4.000, -3.625, -1.125, -3.250, -0.875, -2.875, -3.750, -0.125, -3.875, -0.125, -2.625, -2.500, -4.000, -0.250, 0.125, -0.125, -0.125, -1.875};
#endif

#endif
