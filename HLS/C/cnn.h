#pragma once
#include "utils.h"
#include "activation.h"
#include "pool.h"
#include "conv.h"
#include "flatten.h"
#include "dense.h"
#include "../Headers/definitions.h"


void cnn(float image[IMG_ROWS][IMG_COLS], float (&prediciton)[DIGITS]);