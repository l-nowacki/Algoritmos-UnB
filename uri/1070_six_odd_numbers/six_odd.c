#include <stdio.h>

int main()
{
  int x;
  scanf("%d", &x);

  if (x % 2 == 1) {
    printf("%d\n%d\n%d\n%d\n%d\n%d\n", x, x + 2, x + 4, x + 6, x + 8, x + 10);
  } else {
    x += 1;
    printf("%d\n%d\n%d\n%d\n%d\n%d\n", x, x + 2, x + 4, x + 6, x + 8, x + 10);
  }
  return 0;
}
