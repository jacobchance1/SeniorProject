#include "flatten.h"
//#include <iostream>
void flatten_layer(hls::stream_of_blocks<pool2> &pool_features,
                    hls::stream_of_blocks<flat> &flat_array)
{





   hls::read_lock<pool2> pool(pool_features);
   hls::write_lock<flat> flat(flat_array);
   int index = 0;
            for (int r = 0; r<POOL_IMG_ROWS2;++r){
		#pragma HLS UNROLL
                for (int c=0;c<POOL_IMG_COLS2;++c){
                    for (int f =0;f<FILTERS2;++f){
					#pragma HLS PIPELINE
                    flat[index]=pool[r][c][f];
                    ++index;
              //      std::cout << index << "\n";

                }
            }
        }
 

}
