#include <stdio.h>

int main()
{
  double a, b, c, d, e, f;
  double ap, bp, cp, dp, ep, fp;
  double average;
  int positivos;

  ap = 0;
  bp = 0;
  cp = 0;
  dp = 0;
  ep = 0;
  fp = 0;
  
  scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);

  if (a > 0) {
    positivos += 1;
    ap = a;
  }
  if (b > 0) {
    positivos += 1;
    bp = b;
  }
  if (c > 0) {
    positivos += 1;
    cp = c;
  }
  if (d > 0) {
    positivos += 1;
    dp = d;
  }
  if (e > 0) {
    positivos += 1;
    ep = e;
  }
  if (f > 0) {
    positivos += 1;
    fp = f;
  }

  average = (ap + bp + cp + dp + ep + fp) / positivos;

  
  printf("%d valores positivos\n%.1lf\n", positivos, average);
  return 0;
}

