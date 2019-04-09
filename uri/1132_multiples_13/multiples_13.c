#include <stdio.h>
#include <stdlib.h>

int int_sum(int n);
int sum_13(int first, int last);
int max(int a, int b);
int min(int a, int b);
int first_13(int a);
int last_13(int b);

int main()
{
  int a, b, menor, maior, dumb_total, true_total, total_13,  n;

  scanf("%d %d", &a, &b);
  
  menor = min(a, b);
  maior = max(a, b);

  n = 1 + maior - menor;

  dumb_total = menor * n + int_sum(n - 1);

  total_13 = sum_13(first_13(menor), last_13(maior) );

  true_total = dumb_total - total_13;
  
  printf("%d\n", true_total);
  
  return 0;
}

int int_sum(int n) {
  return ((n + 1) * n) / 2;
}

int sum_13(int first, int last) {
  int n, total;
  n = 1 + (last - first) / 13;
  total = n * first + 13 * int_sum(n - 1);
  return total;
}

int max(int a, int b) {
  return (a + b + abs(a - b)) / 2;
}

int min(int a, int b) {
  return (a + b - abs(a - b)) / 2;
}

int first_13(int a) {
  while (1) {
    if (a % 13 == 0) {
      break;
    } else {
      a++;
      continue;
    }
  }
  return a;
}

int last_13(int b) {
  while (1) {
    if (b % 13 == 0) {
      break;
    } else {
      b--;
      continue;
    }
  }
  return b;
}
