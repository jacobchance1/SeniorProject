#include "dense.h"


void dense_layer(float flat_array[FLAT_SIZE],float (&prediction)[DENSE_SIZE])
{
    float dot = 0.0;
    for (int i=0;i<DENSE_SIZE;++i){
        prediction[i] = 0.0;
    }
    float dense_array[DIGITS];
    for (int i=0; i<DENSE_SIZE; ++i){
        dot = 0;
        for (int j=0;j<FLAT_SIZE;++j){
            dot += dense_weights[j][i] * flat_array[j];
        }
    dense_array[i] = dot + dense_biases[i];
    }
    softmax(dense_array,prediction);
  
}