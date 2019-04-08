#include <stdio.h>

int main()
{
  float i, j;
  int k;
  for (i = 0; i <= 2.1; i += 0.2) {
    j = i + 1;
    for (k = 0; k < 3; k++) {
      printf("I=%.1f J=%.1f\n", i, j);
      j++;
    }

  }
  return 0;
}
