#pragma once
#include "../Headers/definitions.h"
#include "hls_streamofblocks.h"
void normalization_and_padding(hls::stream_of_blocks<raw> &image,
                                hls::stream_of_blocks<pad> &padded_image);

                                
