#include "dense.h"


void dense_layer(hls::stream_of_blocks<flat> &flat_array,float (prediction)[DENSE_SIZE])
{
    float dot = 0.0;
    hls::read_lock<flat> flat(flat_array);
    float dense_array[DIGITS];
    for (int i=0; i<DENSE_SIZE; ++i){
	#pragma HLS UNROLL
        dot = 0;
        for (int j=0;j<FLAT_SIZE;++j){
            dot += dense_weights[j][i] * flat[j];
        }
    dense_array[i] = dot + dense_biases[i];
    }
    softmax(dense_array,prediction);
  
}
