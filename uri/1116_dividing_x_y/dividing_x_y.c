#include <stdio.h>

int main()
{
  int N, x, y, i;
  scanf("%d", &N);

  for (i = 0; i < N; ++i) {
    scanf("%d %d", &x, &y);

    if (y == 0) {
      printf("divisao impossivel\n");
    } else {
      printf("%.1f\n", x * 1.0 / y);
    }
  }

  return 0;
}
