#include <stdio.h>
#include <stdlib.h>

int main()
{
  long long N1, N2;
  while (scanf("%lld %lld", &N1, &N2)!=EOF) {
    if (N1 >= N2) {
      printf("%lld\n", N1 - N2);
    } else {
      printf("%lld\n", N2 - N1);
    }
  }
  return 0;
}
