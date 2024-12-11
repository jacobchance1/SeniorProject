#pragma once
#include "../Headers/conv_weights.h"
#include "../Headers/definitions.h"
#include "activation.h"
#include "hls_streamofblocks.h"

void convolution_layer1(fixed_t (&image)[PAD_IMG_ROWS][PAD_IMG_COLS],
                        hls::stream_of_blocks<conv1> &features, int in);

void convolution_layer2(fixed_t (&image)[POOL_IMG_ROWS1][POOL_IMG_COLS1][FILTERS1],
                        hls::stream_of_blocks<conv2> &features, int in);
void conv1op(fixed_t (&in_lock)[PAD_IMG_ROWS][PAD_IMG_COLS], hls::write_lock<conv1> &feature_lock, fixed_t &dot_prod, int &r, int &c, int f, int in);
void conv2op(fixed_t (&image)[POOL_IMG_ROWS1][POOL_IMG_COLS1][FILTERS1], hls::write_lock<conv2> &out_lock, int &ro, int &co, int fo, int in);
