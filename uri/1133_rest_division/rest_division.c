#include <stdio.h>
#include <stdlib.h>

int max(int a, int b);
int min(int a, int b);

int main()
{
  int x, y, i;
  scanf("%d %d", &x, &y);
  
  for (i = min(x, y) + 1; i < max(x, y); ++i) {
    if (i % 5 == 2 || i % 5 == 3 ) {
      printf("%d\n", i);
    }
  }

  return 0;
}

int max(int a, int b) {
  return (a + b + abs(a - b)) / 2;
}

int min(int a, int b) {
  return (a + b - abs(a - b)) / 2;
}

