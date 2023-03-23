#include<stdio.h>
#include<math.h>

/*
C program to calculate arithmetic mean, harmonic mean and geometric mean

*/
int main ()
{
  int i, size;
  double product = 1, root;
  float arr[10], oneNthValue = 0;
  float harmonicMean, averageMean, geometricMean;
  float sum = 0;
  printf ("Please enter the number of elements = ");
  scanf ("%d", &size);
  printf ("Now, enter the elements \n");
  for (i = 0; i < size; i++)
    {
      printf ("Element %d : ", i + 1);
      scanf ("%f", &arr[i]);
    }
    
  for (i = 0; i < size; i++)
    {
      oneNthValue = oneNthValue + 1 / arr[i];
      sum = sum + arr[i];
      product = (double) product *arr[i];
    }
    
  root = (double) 1 / size;
  harmonicMean = (float) size / oneNthValue;
  averageMean = (float) (sum / size);
  geometricMean = (float) pow (product, root);

  printf
    ("\n Harmonic mean= %.2f \n Arithmetic mean = %.2f \n Geometric mean = %.2f",
     harmonicMean, averageMean, geometricMean);

  return 0;
}
