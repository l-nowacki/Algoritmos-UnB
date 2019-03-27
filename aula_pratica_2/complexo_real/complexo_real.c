#include <stdio.h>
#include <math.h>

int main()
{
  long long a, b, c, delta;

  scanf("%lld %lld %lld", &a, &b, &c);

  delta = pow(b, 2) - (4 * a * c);

  if (delta >= 0) {
    printf("reais");
  } else if (delta < 0) {
    printf("complexas");
  }
  
  return 0;
}
