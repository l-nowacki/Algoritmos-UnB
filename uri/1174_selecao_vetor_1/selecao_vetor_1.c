#include <stdio.h>

int main()
{
  int i;
  float x;
  float A[100];

  for (i = 0; i < 100; ++i) {
    scanf("%f", &x);
    A[i] = x;
    if (x <= 10.0) {
      printf("A[%d] = %.1f\n", i, x);
    }
  }
  
  return 0;
}
