#include <stdio.h>

int main()
{
  double a, b, resultado;

  scanf("%lf %lf", &a, &b);
  resultado = ((3.5 * a) + (7.5 * b)) / 11;

  printf("MEDIA = %.5lf\n", resultado);
  return 0;
}
