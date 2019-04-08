#include <stdio.h>

int main()
{
  int N, i;
  double f1, f2, f3;

  scanf("%d", &N);
  
  for (i = 0; i < N; ++i) {
    scanf("%lf %lf %lf", &f1, &f2, &f3);
    printf("%.1lf\n", (2 * f1 + 3 * f2 + 5 * f3) / 10);

  }


  return 0;
}
