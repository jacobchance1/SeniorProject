#pragma once
#include "../Headers/definitions.h"
#include "hls_streamofblocks.h"
void max_pool1_layer(hls::stream_of_blocks<conv1> &in_features,
                    hls::stream_of_blocks<pool1> &out_features);


void max_pool2_layer(hls::stream_of_blocks<conv2> &in_features,
                    hls::stream_of_blocks<pool2> &out_features);
