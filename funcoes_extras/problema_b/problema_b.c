#include <stdio.h>

int maxi(int a, int b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

int square(int a) {
  return a * a;
}

int cube(int a) {
  return a * a * a;
}

int ehprimo(int x) {

  int i;

  for (i = 2; i < x; ++i) {

    if (square(i) > x) {
      return 1;
    } else if (x % i == 0) {
      return 0;
    }
    
  }
  
}

int divisoresPrimos(int x) {
  int quantidade = 0, i;

  for (i = 2; i < x; ++i) {
    if (x % i == 0 && ehprimo(i)) {
      quantidade += 1;
    }
  }

  return quantidade;
  
}

int f(int x, int a, int b) {
  return (a * cube(divisoresPrimos(x))) - (b * x);
}


int main()
{

  int a, b, l, r, max, i, now;

  scanf("%d %d %d %d", &a, &b, &l, &r);

  max = f(l, a, b);

  for (i = l + 1; i <= r; ++i) {

    now = f(i, a, b);

    if (now > max) {
      max = now;
    }
    
  }

  printf("%d\n", max);
  
  return 0;
}
