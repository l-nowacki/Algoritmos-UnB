#include <stdio.h>

int fact(int n);

int main()
{
  int N;
  scanf("%d", &N);

  printf("%d\n", fact(N));
  return 0;
}

int fact(int n) {
  if (n < 2) {
    return 1;
  } else {
    return n * fact(n - 1);
  }
}
