#include "flatten.h"

void flatten_layer(float (&pool_features)[POOL_IMG_ROWS2][POOL_IMG_COLS2][FILTERS2],
                    float (&flat_array)[FLAT_SIZE])
{


    for (int h=0;h<FLAT_SIZE;++h){
        flat_array[h]=0.0;
    }

    int p =0;
   

            for (int r = 0; r<POOL_IMG_ROWS2;++r){
                for (int c=0;c<POOL_IMG_COLS2;++c){
                    for (int f =0;f<FILTERS2;++f){
                    flat_array[p] = pool_features[r][c][f];
                    ++p;
                }
            }
        }
 

}