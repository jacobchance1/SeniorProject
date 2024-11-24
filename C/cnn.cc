#include "cnn.h"



void cnn(float image[IMG_ROWS][IMG_COLS], float (&prediction)[DIGITS]) 
{
    float padded_image[PAD_IMG_ROWS][PAD_IMG_COLS] = {{0}};
   
    normalization_and_padding(image,padded_image);
   
    
 
 
    float features1[CONV1_ROWS][CONV1_COLS][FILTERS1] = {{{0}}};
    
    convolution_layer1(padded_image,features1);
 





    float pool_features1[POOL_IMG_ROWS1][POOL_IMG_COLS1][FILTERS1] = {{{0}}};
    max_pool1_layer(features1,pool_features1);
   
    

    float features2[CONV2_ROWS][CONV2_COLS][FILTERS2] = {{{0}}};
    convolution_layer2(pool_features1,features2);
 

    float pool_features2[POOL_IMG_ROWS2][POOL_IMG_COLS2][FILTERS2] = {{{0}}};
    max_pool2_layer(features2,pool_features2);
  
    float flat_array[FLAT_SIZE] = {0};
    flatten_layer(pool_features2,flat_array);
 

    dense_layer(flat_array,prediction);

  
}