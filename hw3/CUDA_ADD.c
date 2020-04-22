
//https://towardsdatascience.com/writing-lightning-fast-code-with-cuda-c18677dcdd5f

//The run time for this code was really slow compare to the code below writing using CUDA
#include <iostream>
#include <math.h>
 
//CUDA function
__global__
void Add_CUDA(int n, float *x, float *y)
{
  for (int i = 0; i < n; i++)
	y[i] = x[i] + y[i];
}
 
int main(void)
{
  int N = 1<<20;
  float *x, *y;
 
  // Allocate Unified Memory – accessible from CPU or GPU
  cudaMallocManaged(&x, N*sizeof(float));
  cudaMallocManaged(&y, N*sizeof(float));
 
  // initialize x and y arrays on the host
  for (int i = 0; i < N; i++) {
	x[i] = 1.0f;
	y[i] = 2.0f;
  }
	// basic system call for our add function.
// Run kernel on 1M elements on the GPU
  Add_CUDA<<<1, 1>>>(N, x, y);
 
  // Wait for GPU to finish before accessing on host
  cudaDeviceSynchronize();
 
  // Check for errors (all values should be 3.0f)
  float maxError = 0.0f;
  for (int i = 0; i < N; i++)
  maxError = fmax(maxError, fabs(y[i]-3.0f));
  std::cout << "Max error: " << maxError << std::endl;
  return 0;
}