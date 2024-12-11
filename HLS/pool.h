#pragma once
#include "../Headers/definitions.h"
#include "hls_streamofblocks.h"
void max_pool1_layer(hls::stream_of_blocks<conv1> &in_features,
                    fixed_t (&out_features)[POOL_IMG_ROWS1][POOL_IMG_COLS1][FILTERS1], int in);


void max_pool2_layer(hls::stream_of_blocks<conv2> &in_features,
                    hls::stream_of_blocks<pool2> &out_features, int in);
