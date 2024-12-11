#include "cnn.h"
//#include <iostream>
#include "hls_streamofblocks.h"


void cnn(fixed_t (&image)[IMG_ROWS][IMG_COLS], fixed_t (&prediction)[DIGITS])
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

void forward(hls::stream_of_blocks<raw> &image, fixed_t prediction[DIGITS])
{
    // Declare streams outside the dataflow region
	fixed_t padded_image[PAD_IMG_ROWS][PAD_IMG_COLS] = {
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}

	};

    hls::stream_of_blocks<conv1> features1[NUM_STREAMS];
    fixed_t pool_features1[POOL_IMG_ROWS1][POOL_IMG_COLS1][FILTERS1];
    hls::stream_of_blocks<conv2> features2[NUM_STREAMS];
    hls::stream_of_blocks<pool2> pool_features2[NUM_STREAMS];
    fixed_t flat_array[FLAT_SIZE];

    #pragma HLS DATAFLOW // Enable dataflow optimization across all loops/functions
   // std::cout << "made it to padding \n";
    normalization_and_padding(image,padded_image);

    first_pipe:
    for (int i=0;i<NUM_STREAMS;++i){
		//#pragma HLS PIPELINE
    	//std::cout << "in first_pipe iteration: " << i << "\n";
    	convolution_layer1(padded_image,features1[i],i);
    	max_pool1_layer(features1[i],pool_features1,i);
    }
    second_pipe:
	for (int i=0;i<NUM_STREAMS;++i){
		//std::cout << "in second_pipe iteration: " << i << "\n";
		#pragma HLS PIPELINE
		convolution_layer2(pool_features1,features2[i],i);
		max_pool2_layer(features2[i],pool_features2[i],i);
		flatten_layer(pool_features2[i],flat_array,i);
	}

	//std::cout << "entering dense:\n";

    dense_layer(flat_array, prediction);
}

void write_to_stream(hls::stream_of_blocks<raw>&img_stream, fixed_t image[IMG_ROWS][IMG_COLS]){
	   //	std::cout << "writing to stream\n";
	        hls::write_lock<raw> lock(img_stream);
	        clone_for_rows: for (int r=0;r<IMG_ROWS;++r){
	        	clone_for_cols: for (int c=0;c<IMG_COLS;++c){
					#pragma HLS PIPELINE
	        		lock[r][c] = image[r][c];
	        		//std::cout << image[r][c] << "\n";
	        	}
	        }

}
