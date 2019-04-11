#include <stdio.h>

int main()
{
  long long a, b, result, i, aux;
  const int BIG = 1000000007;
  
  scanf("%lld %lld", &a, &b);

  result = 1;
  
  for (i = 0; i < b; ++i) {
    result = ((a % BIG) * result) % BIG;
  }

  printf("%lld\n", result);

  return 0;
}
