#include <stdio.h>

int main()
{
  int i, j, k;
  for (i = 1; i < 10; i +=2) {
    j = i + 6;
    for (k = 0; k < 3; k++) {
      printf("I=%d J=%d\n", i, j);
      j--;
    }

  }
  return 0;
}
