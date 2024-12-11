#pragma once
#include "utils.h"
#include "activation.h"
#include "pool.h"
#include "conv.h"
#include "flatten.h"
#include "dense.h"
#include "../Headers/definitions.h"
#include "hls_streamofblocks.h"

void cnn(fixed_t (&image)[IMG_ROWS][IMG_COLS], fixed_t (&prediciton)[DIGITS]);
void forward(hls::stream_of_blocks<raw> &image,
		fixed_t prediction[DIGITS] );
void write_to_stream(hls::stream_of_blocks<raw>&img_stream, fixed_t image[IMG_ROWS][IMG_COLS]);

