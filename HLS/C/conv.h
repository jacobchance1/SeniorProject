#pragma once
#include "../Headers/conv_weights.h"
#include "../Headers/definitions.h"
#include "activation.h"

void convolution_layer1(float (&image)[PAD_IMG_ROWS][PAD_IMG_COLS], 
                        float (&features)[CONV1_ROWS][CONV1_COLS][FILTERS1]);

void convolution_layer2(float (&image)[POOL_IMG_ROWS1][POOL_IMG_COLS1][FILTERS1], 
                        float (&features)[CONV2_ROWS][CONV2_COLS][FILTERS2]);

