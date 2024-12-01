#include "conv.h"
//#include <iostream>
void convolution_layer1(hls::stream_of_blocks<pad> &image,
                        hls::stream_of_blocks<conv1> &features)



{

	hls::read_lock<pad> img_lock(image);
	hls::write_lock<conv1> feature_lock(features);

    float dot_prod =0.0;
  
        filter_loop: for (int f=0;f<FILTERS1;++f){
		#pragma HLS UNROLL factor=10
            row_loop: for (int r =0;r<CONV1_ROWS;++r){
			//#pragma HLS PIPELINE
                col_loop: for (int c=0;c<CONV1_COLS;++c){
                    dot_prod = 0.0;
            		#pragma HLS PIPELINE
                    kr_loop: for (int kr=0; kr<KRN_ROWS; ++kr){
                        kc_loop: for (int kc=0;kc<KRN_COLS;++kc){
							#pragma HLS PIPELINE
                             dot_prod+=conv1_weights[kr][kc][0][f] * img_lock[r+kr][c+kc];

                            
                        }
                    }
                
                    feature_lock[r][c][f] = ReLU(dot_prod+conv1_biases[f]);
                }
            }
        }
    
 


}

void convolution_layer2(hls::stream_of_blocks<pool1> &image,
                        hls::stream_of_blocks<conv2> &features)
{
 


		hls::read_lock<pool1> in_lock(image);
		hls::write_lock<conv2> out_lock(features);
		for (int fo = 0; fo < FILTERS2; ++fo) {
		#pragma HLS UNROLL factor=10
			for (int ro = 0; ro < CONV2_ROWS; ++ro) {
				for (int co = 0; co < CONV2_COLS; ++co) {
				#pragma HLS PIPELINE
					for (int kr = 0; kr < KRN_ROWS; ++kr) {
						for (int kc = 0; kc < KRN_COLS; ++kc) {
							for (int fi = 0; fi < FILTERS1; ++fi) {
								#pragma HLS PIPELINE
								//std::cout << fo+5*bus_num << " " << fi+2*bus_num << " " << "\n";
								out_lock[ro][co][fo] += conv2_weights[kr][kc][fi][fo] * in_lock[ro + kr][co + kc][fi];
							}
						}

					}
					out_lock[ro][co][fo] = ReLU(out_lock[ro][co][fo] + conv2_biases[fo]);

					}
				}
			}

}














