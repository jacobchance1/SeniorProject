#include "cnn.h"
//#include <iostream>
#include "hls_streamofblocks.h"


void cnn(float image[IMG_ROWS][IMG_COLS], float (prediction)[DIGITS])
{

	//std::cout << "\nmade it into cnn\n";

#pragma HLS interface m_axi port=image depth=784 offset=slave bundle=INPUT
#pragma HLS interface m_axi port=prediction depth=DIGITS offset=slave bundle=OUTPUT
#pragma HLS interface s_axilite port=return

	/*
	 * This is the input to the CNN> First an image stream is created and
	 * the image is copied and sent through the forward pass
	 * on a stream.
	 */
    hls::stream_of_blocks<raw> img_stream;
    //sleep(3);
   // std::cout << "making streams" << "\n";
#pragma HLS DATAFLOW

    write_to_stream(img_stream,image);
//    std::cout << "going into forward\n";
    forward(img_stream,prediction);

}

void forward(hls::stream_of_blocks<raw> &image, float prediction[DIGITS])
{
    // Declare streams outside the dataflow region
    hls::stream_of_blocks<pad> padded_image;
    hls::stream_of_blocks<conv1> features1;
    hls::stream_of_blocks<pool1> pool_features1;
    hls::stream_of_blocks<conv2> features2;
    hls::stream_of_blocks<pool2> pool_features2;
    hls::stream_of_blocks<flat> flat_array;

    #pragma HLS DATAFLOW // Enable dataflow optimization across all loops/functions

    normalization_and_padding(image,padded_image);
    convolution_layer1(padded_image,features1);
    max_pool1_layer(features1,pool_features1);
    convolution_layer2(pool_features1,features2);
    max_pool2_layer(features2,pool_features2);
    flatten_layer(pool_features2,flat_array);

    dense_layer(flat_array, prediction);
}

void write_to_stream(hls::stream_of_blocks<raw>&img_stream, float image[IMG_ROWS][IMG_COLS]){
	   //	std::cout << "writing to stream\n";
	        hls::write_lock<raw> lock(img_stream);
	        clone_for_rows: for (int r=0;r<IMG_ROWS;++r){
	        	clone_for_cols: for (int c=0;c<IMG_COLS;++c){
					#pragma HLS PIPELINE
	        		lock[r][c] = image[r][c];
	        	}
	        }

}
