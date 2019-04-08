#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N, x, y, line_total = 0, i, j;
  scanf("%d", &N);
  

  for (i = 0; i < N; ++i) {
    scanf("%d %d", &x, &y);
    line_total = 0;
    for (j = ((x + y - abs(x - y)) / 2) + 1 ; j < (x + y + abs(x - y)) / 2 ; j++) {
      if (j % 2 == 1) {
	line_total += j;
      }
    }
    printf("%d\n", line_total);

  }

  return 0;
}
