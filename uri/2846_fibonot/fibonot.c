#include <stdio.h>

int is_fib(int number);
int fib(int number);

int main()
{
  int K, count = 1, flag = 1;
  long long i = 4;
  
  scanf("%d", &K);

 
  while (flag) {
    if (is_fib(i)) {
      i++;
    } else if (count == K) {
      printf("%lld\n", i);
      flag = 0;
    } else {
      count += 1;
      i++;
    } 
  }
  
  return 0;
}

int fib(int number) {
  int a = 0, b = 1, i, tot;
  for (i = 0; i < number - 1; ++i) {
    tot = a + b;
    a = b;
    b = tot;
  }
  return tot;
}

int is_fib(int number) 
{
    int n = 1; 
    while(fib(n) < number) 
      n++;
    return (fib(n) == number ? 1 : 0)
}

