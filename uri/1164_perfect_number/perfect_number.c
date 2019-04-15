#include <stdio.h>

int main()
{
  int n, x, tot = 0, i, j;

  scanf("%d", &n);

  for (i = 0; i < n; ++i) {
    scanf("%d", &x);
    
    for (j = 1; j < x; ++j) {
      if (x % j == 0) {
	tot += j;
      }
    }

    //printf("%d\n", tot);
    
    if (tot == x) {
      printf("%d eh perfeito\n", x);
    } else {
      printf("%d nao eh perfeito\n", x);
    }
    
    tot = 0;
  }

  return 0;
}
