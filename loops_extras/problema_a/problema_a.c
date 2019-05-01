#include <stdio.h>

int main()
{
  double S, aumento = 0.015;
  int A, i, N;

  scanf("%lf %d", &S, &A);

  S = S * 1.015;

  N = A - 2006;
  
  for (i = 0; i < N; ++i) {
    aumento *= 2.0;
    S += S * aumento;
  }

  printf("%.9f\n", S);
  
  return 0;
}
