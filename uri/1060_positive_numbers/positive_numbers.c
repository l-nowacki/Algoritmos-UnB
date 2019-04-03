#include <stdio.h>

int main()
{
  double a, b, c, d, e, f;
  int positivos;

  scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);

  if (a > 0) {
    positivos += 1;
  }
  if (b > 0) {
    positivos += 1;
  }
  if (c > 0) {
    positivos += 1;
  }
  if (d > 0) {
    positivos += 1;
  }
  if (e > 0) {
    positivos += 1;
  }
  if (f > 0) {
    positivos += 1;
  }

  printf("%d valores positivos\n", positivos);
  return 0;
}
