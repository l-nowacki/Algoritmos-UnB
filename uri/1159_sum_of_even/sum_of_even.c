#include <stdio.h>

int main()
{
  int X, tot = 0, new, i;
  while (1) {
    scanf("%d", &X);
    if (X == 0) {
      break;
    } else if (X % 2 == 0) {
      new = X;
    } else {
      new = X + 1;
    }

    for (i = 0; i < 5; ++i) {
      tot += new;
      new += 2;
    }

    printf("%d\n", tot);
    tot = 0;
  }
  return 0;
}
