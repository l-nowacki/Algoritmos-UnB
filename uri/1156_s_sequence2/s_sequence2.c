#include <stdio.h>
#include <math.h>

int main()
{
  double S = 1;
  int i;

  for (i = 2; i < 20; ++i) {
    S += ((i * 2) - 1) / pow(2, i - 1);
  }

  printf("%.2lf\n", S);
  
  return 0;
}
