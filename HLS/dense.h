#include "../Headers/definitions.h"
#include "../Headers/dense_weights.h"
#include "activation.h"
#include "hls_streamofblocks.h"

void dense_layer(hls::stream_of_blocks<flat> &flat_array,float (prediction)[DENSE_SIZE]);
