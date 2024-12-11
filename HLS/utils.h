#pragma once
#include "../Headers/definitions.h"
#include "hls_streamofblocks.h"
void normalization_and_padding(hls::stream_of_blocks<raw> &image,
                                fixed_t (&padded_image)[PAD_IMG_ROWS][PAD_IMG_COLS]);

                                
