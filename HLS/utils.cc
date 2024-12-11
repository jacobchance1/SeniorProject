#include "utils.h"

void normalization_and_padding(hls::stream_of_blocks<raw> &image,
                                fixed_t (&padded_image)[PAD_IMG_ROWS][PAD_IMG_COLS])
{
	hls::read_lock<raw> img_lock(image);

    for (int i =0; i< IMG_ROWS; ++i){
        for (int j=0;j< IMG_COLS; ++j){
            padded_image[i+PAD_ROWS/2][j+PAD_COLS/2] = img_lock[i][j]/((fixed_t)255.0);
           // std::cout << img_lock[i][j] << "\n";
        }
    }

}
