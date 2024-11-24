#pragma once
#include <cmath>
#include "../Headers/definitions.h"

float ReLU(float x);
void softmax(float FC_output[DIGITS], float (&FC_pred)[DIGITS]);
