#include <stdio.h>



int main()
{
  long long N, i, menos2 = 0, menos1 = 1, fib = 0;
  const long long BIG = 1000000007;
  
  scanf("%lld", &N);

  for (i = 0; i < N; ++i) {
    if (i == 0) {
      printf("1\n");
    } else {
      fib = ((menos1 % BIG) + (menos2 % BIG)) % BIG;
      menos1 = menos2;
      menos2 = fib;
      printf("%lld\n", (fib % BIG + 1) % BIG);
    }
  }
  
  return 0;
}

