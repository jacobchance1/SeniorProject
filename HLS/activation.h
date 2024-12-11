#pragma once
#include <cmath>
#include "../Headers/definitions.h"
#include "hls_streamofblocks.h"

fixed_t ReLU(fixed_t x);
void softmax(fixed_t FC_output[DIGITS], fixed_t (FC_pred)[DIGITS]);
