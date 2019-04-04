#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x, y, maior, menor, odd_sum, i;
  odd_sum = 0;

  scanf("%d %d", &x, &y);
  

  maior = (x + y + abs(x - y)) / 2;
  menor = (x + y - abs(x - y)) / 2;

  for (i = menor + 1; i < maior; ++i) {
    if (i % 2 == 0) {
      continue;
    } else {
      odd_sum += i;
    }
  }

  printf("%d\n", odd_sum);
  
  return 0;
}
