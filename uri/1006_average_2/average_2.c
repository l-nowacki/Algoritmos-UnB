#include <stdio.h>

int main()
{
  double a, b, c, average;

  scanf("%lf %lf %lf", &a, &b, &c);

  average = (2 * a + 3 * b + 5 * c ) / 10;

  printf("MEDIA = %.1lf\n", average); 
  return 0;
}
