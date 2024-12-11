#include "../Headers/definitions.h"
#include "../Headers/dense_weights.h"
#include "activation.h"
#include "hls_streamofblocks.h"

void dense_layer(fixed_t (&flat)[FLAT_SIZE],fixed_t (prediction)[DENSE_SIZE]);
