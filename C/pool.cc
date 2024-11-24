#include "pool.h"



void max_pool1_layer(float (&in_features)[CONV1_ROWS][CONV1_COLS][FILTERS1],
                    float (&pool_features)[POOL_IMG_ROWS1][POOL_IMG_COLS1][FILTERS1])
{
  
        for (int f=0;f<FILTERS1;++f){
            for (int r =0;r<CONV1_ROWS;r+=POOL_ROWS){
                for (int c=0;c<CONV1_COLS;c+=POOL_COLS){
                    float max = in_features[r][c][f];
                    for (int pr=0;pr<POOL_ROWS;++pr){
                        for (int pc=0;pc<POOL_COLS;++pc){
                            if (in_features[r+pr][c+pc][f] > max){
                                max = in_features[r+pr][c+pc][f];
                            }
                        }
                    }
                pool_features[r/POOL_ROWS][c/POOL_COLS][f] = max;
                }

            }

        }

    
}

void max_pool2_layer(float (&in_features)[CONV2_ROWS][CONV2_COLS][FILTERS2],
                    float (&pool_features)[POOL_IMG_ROWS2][POOL_IMG_COLS2][FILTERS2])
{

        for (int f=0;f<FILTERS2;++f){
            for (int r =0;r<CONV2_ROWS;r+=POOL_ROWS){
                for (int c=0;c<CONV2_COLS;c+=POOL_COLS){
                    float max = in_features[r][c][f];
                    for (int pr=0;pr<POOL_ROWS;++pr){
                        for (int pc=0;pc<POOL_COLS;++pc){
                            if (in_features[r+pr][c+pc][f] > max){
                                max = in_features[r+pr][c+pc][f];
                            }
                        }
                    }
                    pool_features[r/POOL_ROWS][c/POOL_COLS][f] = max;
                }

            }

        }

  


}

