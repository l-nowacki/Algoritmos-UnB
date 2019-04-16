#include <stdio.h>

int main()
{

  int i, j;
  int fin1, fin2;

  fin1 = 25;
  fin2 = 10;

  printf("%d\n", fin1 * fin2 * 2);

  for (i = 0; i < fin1; ++i) {
    for (j = 0; j < fin2; ++j) {
      printf("4 ");
    }
    printf("\n");
  }

  return 0;
}
