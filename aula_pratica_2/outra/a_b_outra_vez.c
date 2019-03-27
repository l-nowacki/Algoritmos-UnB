#include <stdio.h>

int main()
{
  int a, b;

  scanf("%d %d", &a, &b);
  

  if (a > b) {
    printf("%d\n%d\ndiferentes\n", a, b);
  } else if (a < b) {
    printf("%d\n%d\ndiferentes\n", b, a);
  } else {
    printf("%d\n%d\niguais\n", a, b);
  }
  return 0;
}
