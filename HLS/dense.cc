#include "dense.h"


void dense_layer(fixed_t (&flat)[FLAT_SIZE],fixed_t (prediction)[DENSE_SIZE])
{
    fixed_t dot = 0.0;
    fixed_t dense_array[DIGITS];
    for (int i=0; i<DENSE_SIZE; ++i){
	//#pragma HLS UNROLL
        dot = 0;
        for (int j=0;j<FLAT_SIZE;++j){
            dot += dense_weights[j][i] * flat[j];
        }
    dense_array[i] = dot + dense_biases[i];
    }
    softmax(dense_array,prediction);
  
}
