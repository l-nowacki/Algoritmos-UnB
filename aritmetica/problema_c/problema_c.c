#include <stdio.h>

int main()
{
  long long a, b, c;

  scanf("%lld %lld %lld", &a, &b, &c);

  if (c > 0) {
    printf("0\n");
  } else {
    printf("%lld\n", a % b);
  }
  return 0;
}
