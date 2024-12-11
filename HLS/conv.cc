#include "conv.h"
//#include <iostream>


void convolution_layer1(fixed_t (&image)[PAD_IMG_ROWS][PAD_IMG_COLS],
                        hls::stream_of_blocks<conv1> &features, int in)



{


	hls::write_lock<conv1> feature_lock(features);


  
        filter_loop: for (int f=0;f<EF_FILTERS1;++f){
		#pragma HLS UNROLL factor=10
            row_loop: for (int r =0;r<CONV1_ROWS;++r){
			//#pragma HLS PIPELINE
                col_loop: for (int c=0;c<CONV1_COLS;++c){
                    fixed_t dot_prod = 0;
                    kr_loop: for (int kr=0; kr<KRN_ROWS; ++kr){
                        kc_loop: for (int kc=0;kc<KRN_COLS;++kc){
                			#pragma HLS PIPELINE
                            dot_prod+=conv1_weights[kr][kc][0][f+in*EF_FILTERS1] * image[r+kr][c+kc];
                        }
                    }
                    feature_lock[r][c][f] = ReLU(dot_prod+conv1_biases[f+in*EF_FILTERS1]);

                   // if (feature_lock[r][c][f] > 10) std::cout << f << " " << in << " " << r << " " << c << " " << feature_lock[r][c][f] << "\n";
                }
            }
        }
    
 


}

void convolution_layer2(fixed_t (&image)[POOL_IMG_ROWS1][POOL_IMG_COLS1][FILTERS1],
                        hls::stream_of_blocks<conv2> &features, int in)
{
 



		hls::write_lock<conv2> out_lock(features);
		for (int fo = 0; fo < EF_FILTERS2; ++fo) {
		#pragma HLS UNROLL factor=10
			for (int ro = 0; ro < CONV2_ROWS; ++ro) {
				for (int co = 0; co < CONV2_COLS; ++co) {
					out_lock[ro][co][fo] =0;
				//#pragma HLS DATAFLOW
					for (int kr = 0; kr < KRN_ROWS; ++kr) {
						for (int kc = 0; kc < KRN_COLS; ++kc) {
							for (int fi = 0; fi < FILTERS1; ++fi) {
								#pragma HLS PIPELINE
								//std::cout << fo+5*bus_num << " " << fi+2*bus_num << " " << "\n";
								out_lock[ro][co][fo] += conv2_weights[kr][kc][fi][fo+in*EF_FILTERS2] * image[ro + kr][co + kc][fi];
							}
						}
					}
					out_lock[ro][co][fo] = ReLU((fixed_t)(out_lock[ro][co][fo] + conv2_biases[fo+in*EF_FILTERS2]));
					//out_lock[ro][co][fo] = ReLU(out_lock[ro][co][fo] + conv2_biases[fo]);


					}
				}
			}

}













