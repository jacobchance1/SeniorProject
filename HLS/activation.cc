#include "activation.h"



float ReLU(float x) {
    return (x > 0) ? x : 0.0; // Return directly without reassigning
}

void softmax(float FC_output[DIGITS], float (FC_pred)[DIGITS]) {
    float sum = 0;
    float max=0;
    
    for (int i =0;i<DIGITS;++i){
        if (FC_output[i] > max) max = FC_output[i];
    }

    // Exponentiate each value and accumulate the sum, subtracting the max_value first
    for (int i = 0; i < DIGITS; ++i) {
        sum += std::exp(FC_output[i]-max);
      
    }

    // Prevent division by zero by checking if sum is zero (shouldn't happen with proper input)
    if (sum == 0) {
        for (int k = 0; k < DIGITS; ++k) {
            FC_pred[k] = 0;  // or handle as needed (though this is unlikely to happen)
        }
        return;
    }

    // Calculate the softmax probabilities
    for (int k = 0; k < DIGITS; ++k) {
        FC_pred[k] = std::exp(FC_output[k]-max) / sum;
    }
}
