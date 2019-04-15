#include <stdio.h>


int main()
{
  int N, menos2, menos1, fib, i;

  scanf("%d", &N);


  menos2 = 0;
  menos1 = 1;

  if (N > 0) {
    printf("%d ", 0);
  }

  if (N > 1) {
    printf("%d ", 1);
  }

  for (i = 0; i < N - 2; ++i) {
    fib = menos1 + menos2;
    menos2 = menos1;
    menos1 = fib;
    if (i < N - 3) {
      printf("%d ", fib);
    } else if (i == N - 3) {
      printf("%d", fib);
    }
    
  }

  

  printf("\n");

  return 0;
}
