#include "pool.h"
//#include <iostream>


void max_pool1_layer(hls::stream_of_blocks<conv1> &in_features,
                    fixed_t (&out_features)[POOL_IMG_ROWS1][POOL_IMG_COLS1][FILTERS1], int in)
{

	hls::read_lock<conv1> in_lock(in_features);

  
        loop_over_maps: for (int f=0;f<EF_FILTERS1;++f){
		#pragma HLS UNROLL factor=10
            loop_over_rows: for (int r =0;r<CONV1_ROWS;r+=POOL_ROWS){
			#pragma HLS PIPELINE
                loop_over_columns: for (int c=0;c<CONV1_COLS;c+=POOL_COLS){
				#pragma HLS PIPELINE
                    fixed_t max = in_lock[r][c][f];
                   loop_over_pr: for (int pr=0;pr<POOL_ROWS;++pr){
                        loop_over_pc: for (int pc=0;pc<POOL_COLS;++pc){
							#pragma HLS PIPELINE
                            if (in_lock[r+pr][c+pc][f] > max){
                                max = in_lock[r+pr][c+pc][f];
                            }
                        }
                    }
                out_features[r/POOL_ROWS][c/POOL_COLS][f+EF_FILTERS1*in] = max;
                //std::cout << "maxpool: " << max << std::endl;

                }

            }

        }

    
}

void max_pool2_layer(hls::stream_of_blocks<conv2> &in_features,
                    hls::stream_of_blocks<pool2> &out_features, int in)
{


	hls::read_lock<conv2> in_lock(in_features);
	hls::write_lock<pool2> pool_lock(out_features);

        loop_over_map: for (int f=0;f<EF_FILTERS2;++f){
		#pragma HLS UNROLL factor=10
           loop_over_rows: for (int r =0;r<CONV2_ROWS;r+=POOL_ROWS){

                loop_over_col: for (int c=0;c<CONV2_COLS;c+=POOL_COLS){
					#pragma HLS PIPELINE
                    fixed_t max = in_lock[r][c][f];
                    loop_over_pr: for (int pr=0;pr<POOL_ROWS;++pr){
                       loop_over_pc: for (int pc=0;pc<POOL_COLS;++pc){
                            if (in_lock[r+pr][c+pc][f] > max){
                                max = in_lock[r+pr][c+pc][f];
                            }
                        }
                    }
                    pool_lock[r/POOL_ROWS][c/POOL_COLS][f] = max;
                   // std::cout << "maxpool: " << max << std::endl;
                }

            }

        }

  


}

