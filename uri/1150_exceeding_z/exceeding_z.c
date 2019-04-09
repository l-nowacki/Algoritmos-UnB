#include <stdio.h>

int weird_sum(int a, int n);
int result_sum(int x, int y);

int main()
{
  int x, y, n;

  scanf("%d", &x);

  while (1) {
    scanf("%d", &y);
    if (y <= x) {
      continue;
    } else {
      printf("%d\n", result_sum(x, y));
      break;
    }
  }
  
  return 0;
}



int weird_sum(int a, int n) {
   return ((n * (2 * a + n - 1)) / 2);    
}

int result_sum(int x, int y) {
  int i = 1;
  while (weird_sum(x, i) <= y) {
    i++;
  }
  return i;
}
