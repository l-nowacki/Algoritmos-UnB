#include <stdio.h>

int main()
{
  int a, n;

  scanf("%d", &a);

  while (1) {
    scanf("%d", &n);

    if (n > 0) {
      printf("%d\n", ((n * (2 * a + n - 1))) / 2);
      break;
    } else {
      continue;
    }
  }

  return 0;
}
