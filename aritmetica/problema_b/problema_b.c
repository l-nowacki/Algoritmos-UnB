#include <stdio.h>

int main()
{

  long long a, b, c, m, p1, p2, resultado;

  scanf("%lld %lld %lld", &a, &b, &c);

  
  m = 1000000007;
  
  //p1 = ((a % m) * ((b % m) * (c % m)) % m) % m;
  p1 = (((((a % m) * (b % m)) % m) % m) * (c % m)) % m;
  p2 = ((b % m) + (m - (c % m))) % m;

  resultado = ((p1 % m) + (p2 % m)) % m;

  printf("%lld\n", resultado);
  
    return 0;
}
