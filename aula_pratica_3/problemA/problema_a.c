#include <stdio.h>

int main()
{
  long long N, maior, menor, now, i;
  scanf("%lld", &N);

  scanf("%lld", &now);

  maior = now;
  menor = now;

  for (i = 1; i < N; ++i) {
    scanf("%lld", &now);
    if (now > maior) {
      maior = now;
    }
    if (now < menor) {
      menor = now;
    }
  }

  printf("max = %lld; min = %lld\n", maior, menor);
  return 0;
}
