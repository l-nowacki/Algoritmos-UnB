#include <stdio.h>
#include <math.h>

int main()
{
  int a, b, c;

  scanf("%d %d %d", &a, &b, &c);

  

  if (a < b + c && b < a + c && c < b + a) {
    printf("triangulo\n");

    if (a == b  || a == c  || b == c) {
      printf("isosceles\n");
    }
    
    if (a == b && c == b) {
      printf("equilatero\n");
    }
    else if (a != b && a != c && c != b) {
      printf("escaleno\n");
    }

    if (pow(a, 2) == pow(b, 2) + pow(c, 2) ||
	pow(b, 2) == pow(c, 2) + pow(a, 2) ||
	pow(c, 2) == pow(b, 2) + pow(a, 2) ) {
      printf("retangulo\n");
    }
    
  } else {
    printf("deivis sendo deivis\n");
  }
  return 0;
}
