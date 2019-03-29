#include <stdio.h>
#include <math.h>

int main()
{
  //All three inputs will be bigger than 0
  //All the output phrases should be ALL CAPS
  double a1, b1, c1;
  double a2, b2, c2;

  scanf("%lf %lf %lf", &a1, &b1, &c1);

  
  if (a1 >= b1 && b1 >= c1) {
    a2 = a1;
    b2 = b1;
    c2 = c1;
  } else if (a1 >= c1 && c1 >= b1) {
    a2 = a1;
    b2 = c1;
    c2 = b1;
  } else if (b1 >= a1 && a1 >= c1) {
    a2 = b1;
    b2 = a1;
    c2 = c1;
  } else if (b1 >= c1 && c1 >= a1) {
    a2 = b1;
    b2 = c1;
    c2 = a1;
  } else if (c1 >= a1 && a1 >= b1) {
    a2 = c1;
    b2 = a1;
    c2 = b1;
  } else {
    a2 = c1;
    b2 = b1;
    c2 = a1;
  }


  if (a2 >= b2 + c2) {
    printf("NAO FORMA TRIANGULO\n");
  } else {
    if (pow(a2, 2) == pow(b2, 2) + pow(c2, 2)) {
      printf("TRIANGULO RETANGULO\n");
    } else if (pow(a2, 2) > pow(b2, 2) + pow(c2, 2)) {
      printf("TRIANGULO OBTUSANGULO\n");
    } else if (pow(a2, 2) < pow(b2, 2) + pow(c2, 2)) {
      printf("TRIANGULO ACUTANGULO\n");
    }
    if (a1 == b1 && b1 == c1) {
      printf("TRIANGULO EQUILATERO\n");
    } else if (a1 == b1 || a1 == c1 || b1 == c1) {
      printf("TRIANGULO ISOSCELES\n");
    }
  }
  
  return 0;
}
