#include <stdio.h>

int main()
{
  int a1, b1;
  double c1;

  int a2, b2;
  double c2;

  scanf("%d %d %lf %d %d %lf", &a1, &b1, &c1, &a2, &b2, &c2);


  printf("VALOR A PAGAR: R$ %.2lf\n", (b1 * c1) + (c2 * b2) );

  return 0;
}
