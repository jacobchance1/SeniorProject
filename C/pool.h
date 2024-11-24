#pragma once
#include "../Headers/definitions.h"

void max_pool1_layer(float (&in_features)[CONV1_ROWS][CONV1_COLS][FILTERS1],
                    float (&pool_features)[POOL_IMG_ROWS1][POOL_IMG_COLS1][FILTERS1]);


void max_pool2_layer(float (&in_features)[CONV2_ROWS][CONV2_COLS][FILTERS2],
                    float (&pool_features)[POOL_IMG_ROWS2][POOL_IMG_COLS2][FILTERS2]);