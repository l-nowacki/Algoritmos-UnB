#include <stdio.h>

int main()
{
  int N, x, y, i, j, tot = 0, new;

  scanf("%d", &N);
  for (i = 0; i < N; ++i) {
    scanf("%d %d", &x, &y);
    if (x % 2 == 1 || x % 2 == -1) {
      new = x;
    } else {
      new = x + 1;
    }
    for (j = 0; j < y; ++j) {
      tot += new;
      new += 2;
    }
    printf("%d\n", tot);
    tot = 0;
  }


  return 0;
}
