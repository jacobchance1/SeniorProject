#pragma once
#include "../Headers/definitions.h"
#include "hls_streamofblocks.h"

void flatten_layer(hls::stream_of_blocks<pool2> &pool_features,
                    fixed_t (&flat)[FLAT_SIZE], int in);
