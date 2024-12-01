#pragma once
#include "../Headers/conv_weights.h"
#include "../Headers/definitions.h"
#include "activation.h"
#include "hls_streamofblocks.h"

void convolution_layer1(hls::stream_of_blocks<pad> &image,
                        hls::stream_of_blocks<conv1> &features);

void convolution_layer2(hls::stream_of_blocks<pool1> &image,
                        hls::stream_of_blocks<conv2> &features);


