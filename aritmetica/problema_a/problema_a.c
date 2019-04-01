#include <stdio.h>

int main()
{
  long long T, a, b, p;
  long long resultado;

  scanf("%lld %lld %lld %lld", &T, &a, &b, &p);

  if (T == 1) {
    resultado = ((a % p) + (b % p)) % p;
  } else if (T == 2) {
    resultado = ((a % p) + (p - (b % p))) % p;
  } else if (T == 3) {
    resultado = ((a % p) * (b % p)) % p;
  }

  printf("%lld\n", resultado);
  return 0;
}

