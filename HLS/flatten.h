#pragma once
#include "../Headers/definitions.h"
#include "hls_streamofblocks.h"

void flatten_layer(hls::stream_of_blocks<pool2> &pool_features,
                    hls::stream_of_blocks<flat> &flat_array);
