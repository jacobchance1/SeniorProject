#include "utils.h"

void normalization_and_padding(hls::stream_of_blocks<raw> &image,
                                hls::stream_of_blocks<pad> &padded_image)
{
	hls::read_lock<raw> img_lock(image);
	hls::write_lock<pad> pad_lock(padded_image);
    for (int i =0; i< IMG_ROWS; ++i){
        for (int j=0;j< IMG_COLS; ++j){
            pad_lock[i+PAD_ROWS/2][j+PAD_COLS/2] = img_lock[i][j]/255.0f;
        }
    }

}
