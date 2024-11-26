#include "conv.h"
void convolution_layer1(float (&image)[PAD_IMG_ROWS][PAD_IMG_COLS], 
                        float (&features)[CONV1_ROWS][CONV1_COLS][FILTERS1])



{



    float dot_prod =0.0;
  
        for (int f=0;f<FILTERS1;++f){
            for (int r =0;r<CONV1_ROWS;++r){
                for (int c=0;c<CONV1_COLS;++c){
                    dot_prod = 0.0;
                    for (int kr=0; kr<KRN_ROWS; ++kr){
                        for (int kc=0;kc<KRN_COLS;++kc){
                            for (int ch=0;ch<CHANNELS1;++ch){
                                dot_prod+=conv1_weights[kr][kc][ch][f] * image[r+kr][c+kc];
                                }
                            
                        }
                    }
                
                    features[r][c][f] = ReLU(dot_prod+conv1_biases[f]);
                }
            }
        }
    
 


}

void convolution_layer2(float (&image)[POOL_IMG_ROWS1][POOL_IMG_COLS1][FILTERS1], 
                        float (&features)[CONV2_ROWS][CONV2_COLS][FILTERS2])
{
 
    for (int f=0;f<FILTERS2;++f){
        for (int r=0;r<CONV2_ROWS;++r){
            for (int c=0;c<CONV2_COLS;++c){
                features[r][c][f] = 0.0;
            }
        }
    }

for (int fo = 0; fo < FILTERS2; ++fo) {
    for (int ro = 0; ro < CONV2_ROWS; ++ro) {
        for (int co = 0; co < CONV2_COLS; ++co) {
            for (int kr = 0; kr < KRN_ROWS; ++kr) {
                for (int kc = 0; kc < KRN_COLS; ++kc) {
                    for (int fi = 0; fi < FILTERS1; ++fi) {
                        features[ro][co][fo] += conv2_weights[kr][kc][fi][fo] * image[ro + kr][co + kc][fi];
                    }
                }
  
            }
            features[ro][co][fo] = ReLU(features[ro][co][fo] + conv2_biases[fo]);
        }
    }
}
}