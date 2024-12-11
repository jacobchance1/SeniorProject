#include "activation.h"
#include "hls_math.h"
//#include <iostream>

fixed_t ReLU(fixed_t x) {
    return (x > 0) ? x : (fixed_t)0.0; // Return directly without reassigning
}

void softmax(fixed_t FC_output[DIGITS], fixed_t (FC_pred)[DIGITS]) {
    fixed_t sum = 0;
    fixed_t max=0;
    
    for (int i =0;i<DIGITS;++i){
        if (FC_output[i] > max) max = FC_output[i];
    }

    // Exponentiate each value and accumulate the sum, subtracting the max_value first
    for (int i = 0; i < DIGITS; ++i) {
        sum += hls::exp(FC_output[i]-max);
       // std::cout << "max: " << max <<  std::endl;
      
    }

    // Prevent division by zero by checking if sum is zero (shouldn't happen with proper input)
    if (sum == 0) {
        for (int k = 0; k < DIGITS; ++k) {
        	//std::cout << "likely over/under flow" << "\n";
            FC_pred[k] = 0;  // or handle as needed (though this is unlikely to happen)

        }
        return;
    }

    // Calculate the softmax probabilities
    for (int k = 0; k < DIGITS; ++k) {
        FC_pred[k] = hls::exp(FC_output[k]-max) / sum;
    }
}
