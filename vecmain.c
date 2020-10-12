#include <stdio.h>
#include "veclib.h"

int main(int argc, char* argv[])
{
  printf("Enter size of the vector: ");
  unsigned int n;
  scanf("%d", &n);
  float vec1[n], vec2[n], vecRes[n];
  float norm,dotProduct, angle;
  int status;

  printf("Enter the first vector: ");
  for(unsigned int i=0; i<n; ++i)
  {
    scanf("%f",vec1+i);
  }
  printf("Enter the second vector: ");
  for(unsigned int i=0; i<n; ++i)
  {
    scanf("%f",vec2+i);
  }

  status = sumVec(vec1, vec2, vecRes, n);
  if(status)
  {
    printf("Sum: ");
    for(unsigned int i=0; i<n; ++i)
    {
      printf("%f ", vecRes[i]);
    }
    printf("\n\n");
  }

  status = productVec(vec1, vec2, vecRes, n);
  if(status)
  {
    printf("Element-wise product: ");
    for(unsigned int i=0; i<n; ++i)
    {
      printf("%f ", vecRes[i]);
    }
    printf("\n\n");
  }

  status = normVec(vec1, vec2, n);
  if(status)
  {
    norm = normVec(vec1, vec2, n);
    printf("Norm: %.2f\n\n", norm);
  }

  dotProduct = dotProductVec(vec1, vec2, n);
  printf("Dot Product: %f\n\n", dotProduct);

  angle = angleVec(vec1, vec2, n);
  printf("Angle: %f\n\n", angle);

  return 0;
}
