#include<stdio.h>
#include<math.h>


int main ()
{
  int i, size;
  double product = 1, root;
  float arr[10], oneNthValue = 0;
  float geometricMean;
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
      product = (double) product *arr[i];
    }
    
  root = (double) 1 / size;
  geometricMean = (float) pow (product, root);

  printf("Geometric mean = %.2f", geometricMean);

  return 0;
}
