#include "cnn.h"
#include "utils.h"

#include <iostream>
#include <stdio.h>
#include <time.h>


#define N 10





int
read_images (const char * file, fixed_t images [N][IMG_ROWS][IMG_COLS])
{
  FILE *fp;
  //fclose(fp);


  fp = fopen(file, "r");
  //fseek(fp, 0, SEEK_SET);
  if (fp == NULL)
	 printf("null file");
   // return -1;
  float temp_float;
  for (int i = 0; i < N; ++i)
    for (int x = 0; x < IMG_ROWS; ++x)
      for (int y = 0; y < IMG_COLS; ++y){
        if(fscanf(fp, "%f", & temp_float) != 1){

        	//std::cout<< "\n";
        	//std::cout << i << " " << x << " " << y << "\n";
          return 1; // Error.
          }
        images[i][x][y] = static_cast<fixed_t>(temp_float);
      }

  return fclose(fp);
}

int
read_labels(const char * file, int labels[N])
{
  FILE *fp;

  fp = fopen(file, "r");

  if (fp == NULL)
    return -1;

  for (int i = 0; i < N; ++i)
    if(fscanf(fp, "%d", & labels[i]) != 1)
      return 1;

  return fclose(fp);
}


int
get_max_prediction (fixed_t prediction [DIGITS])
{
  int max_digit = 0;
  for (int i = 0; i < DIGITS; ++i)
  {
    if (prediction[i] > prediction[max_digit])
      max_digit = i;
  }
  return max_digit;
}

void print_prediction(fixed_t prediction[DIGITS]) {
    //std::cout << "PREDICTION: " << get_max_prediction(prediction) << " " << std::endl;
  
}

int main() 
{

	printf("LINE 1");

  if ((0 == (KRN_ROWS % 2)) || (0 == (KRN_COLS % 2)))
  {
    printf("Error: odd kernel sizes are mandatory for this implementation \n");
    return 1;
  }


  	 printf("About to make array");



  fixed_t images[N][IMG_ROWS][IMG_COLS];

  printf("made array");


  if (0 != read_images("in.dat", images))
  {
    printf("Error: can't open file ``in.dat''\n");
    return 1;
  }

  printf("About to make labels");


  int labels[N];
  if (0 != read_labels("out.dat", labels))
  {
    printf("Error: can't open file ``../Data/out.dat''\n");
    return 1;
  }

  printf("about to run the code");

  double time = 0;
  int correct_predictions = 0;
  fixed_t prediction [DIGITS];

  for (int i = 0; i < N; ++i)
  {
    // CNN execution, obtain a prediction.
	printf("Entering CNN");
    clock_t begin = clock();
    //sleep(5);
    cnn(images[i], prediction);
    //print_prediction(prediction);
    clock_t end = clock();

    if (get_max_prediction(prediction) == labels[i])
    {
      ++correct_predictions;

    }
    else
    {
      printf("\nExpected: %d\n", labels[i]);
      printf("Wrong prediction:\n");
     for (int j = 0; j < DIGITS; ++j)
        printf("%d: %f\n", j, prediction[j]);
      printf("\n********************************\n");
    }

     // Sum up time spent.
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    time += time_spent;
  }


  double
  correct_predictions_perc = (double)correct_predictions * 100.0 / (double)N;
  printf("\nTotal predictions: %d\n", N);
  printf("Correct predictions percentage: %.2f %%\n", correct_predictions_perc);
  printf("Average latency: %f (ms)\n", (time / N) * 1000);


  return 0;


}
