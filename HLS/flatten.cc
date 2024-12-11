#include "flatten.h"
//#include <iostream>
void flatten_layer(hls::stream_of_blocks<pool2> &pool_features,
                    fixed_t (&flat)[FLAT_SIZE], int in)
{





   hls::read_lock<pool2> pool(pool_features);


            for (int r = 0; r<POOL_IMG_ROWS2;++r){
		#pragma HLS UNROLL
                for (int c=0;c<POOL_IMG_COLS2;++c){
                    for (int f =0;f<EF_FILTERS2;++f){
					#pragma HLS PIPELINE
                    flat[r*POOL_IMG_COLS2*FILTERS2+c*FILTERS2+f+EF_FILTERS2*in]=pool[r][c][f];

                  //std::cout << r*POOL_IMG_COLS2*FILTERS2+c*FILTERS2+f+EF_FILTERS2*in << "\n";

                }
            }
        }
 

}
