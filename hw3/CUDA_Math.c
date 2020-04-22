
//source: https://towardsdatascience.com/writing-lightning-fast-code-with-cuda-c18677dcdd5f
#include <stdio.h>
#include <math.h>
 
 
// function to add the elements of two arrays
void add(int n, float *x, float *y)
{
  for (int i = 0; i < n; i++)
  	y[i] = x[i] + y[i];
}
 
int main(void)
{
  int total = 1<<20;
 
  float *x =  float(total);
  float *y =  float(total);
 
  // initialize x and y arrays on the host
  for (int i = 0; i < total; i++) {
	x[i] = 1.0f;
	y[i] = 2.0f;
  }
  add(total, x, y);
  float maxError = 0.0f;
  for (int i = 0; i < total; i++)
	maxError = fmax(maxError, fabs(y[i]-3.0f));
  printf("max Error %f", maxError);
  return 0;
}


