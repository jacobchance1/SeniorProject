#include "utils.h"

void normalization_and_padding(float image[IMG_ROWS][IMG_COLS], 
                                float (&padded_image)[PAD_IMG_ROWS][PAD_IMG_COLS])
{
    for (int i=0;i<PAD_IMG_ROWS;++i){
        for (int j=0;j<PAD_IMG_COLS;++j){
            padded_image[i][j]=0.0f;
        }
    }
    for (int i =0; i< IMG_ROWS; ++i){
        for (int j=0;j< IMG_COLS; ++j){
            padded_image[i+PAD_ROWS/2][j+PAD_COLS/2] = (float)image[i][j]/255.0f;
        }
    }

}