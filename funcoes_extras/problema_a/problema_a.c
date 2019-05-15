#include <stdio.h>

int mini(int a, int b) {
  if (a < b) {
    return a;
  } else {
    return b;
  }
}

int maxi(int a, int b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}


int main()
{
  long long N, x, i, min, max;

  scanf("%lld", &N);

  scanf("%lld", &min);

  max = min;
  
  for (i = 1; i < N; ++i) {
    scanf("%lld", &x);

    max = maxi(max, x);
    min = mini(min, x);
    
  }


  printf("min = %lld; max = %lld\n", min, max);
  
  return 0;
}
