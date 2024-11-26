#pragma once
#include "../Headers/definitions.h"

void flatten_layer(float (&pool_features)[POOL_IMG_ROWS2][POOL_IMG_COLS2][FILTERS2],
                    float (&flat_array)[FLAT_SIZE]);