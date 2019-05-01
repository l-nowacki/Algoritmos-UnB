#include <stdio.h>

int main()
{
  int i;
  long long X[10], x;
  
  for (i = 0; i < 10; ++i) {
    scanf("%lld", &x);
    if (x <= 0) {
      printf("X[%d] = 1\n", i);
    } else {
      printf("X[%d] = %lld\n", i, x);
    }
  }



  return 0;
}
