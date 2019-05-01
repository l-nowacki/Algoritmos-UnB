#include <stdio.h>

int main()
{
  long long x, flag = 1, sum = 0, new_sum = 0, old_x;

  scanf("%lld %lld", &old_x, &x);

  sum = old_x + x;

  old_x = x;

  while (flag) {
    scanf("%lld", &x);
    
    if (x == 0) {
      flag = 0;
      break;
    } else {
      new_sum = x + old_x;
      old_x = x;
    }

    if (new_sum > sum) {
      sum = new_sum;
    }    
  }

  printf("%lld\n", sum);
  
  return 0;
}
