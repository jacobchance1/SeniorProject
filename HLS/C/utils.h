#pragma once
#include "../Headers/definitions.h"

void normalization_and_padding(float image[IMG_ROWS][IMG_COLS], 
                                float (&padded_image)[PAD_IMG_ROWS][PAD_IMG_COLS]);

                                