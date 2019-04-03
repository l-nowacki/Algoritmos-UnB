#include <stdio.h>

int main()
{
  int a, b, c, d, e;
  int pares, impares, positivos, negativos;
  pares = 0;
  impares = 0;
  positivos = 0;
  negativos = 0;

  scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

  if (a % 2 == 0) {
    pares += 1;
  }
  if (b % 2 == 0) {
    pares += 1;
  }
  if (c % 2 == 0) {
    pares += 1;
  }
  if (d % 2 == 0) {
    pares += 1;
  }
  if (e % 2 == 0) {
    pares += 1;
  }


  if (a > 0) {
    positivos += 1;
  }
  if (b > 0) {
    positivos += 1;
  }
  if (c > 0) {
    positivos += 1;
  }
  if (d > 0) {
    positivos += 1;
  }
  if (e > 0) {
    positivos += 1;
  }


  if (a < 0) {
    negativos += 1;
  }
  if (b < 0) {
    negativos += 1;
  }
  if (c < 0) {
    negativos += 1;
  }
  if (d < 0) {
    negativos += 1;
  }
  if (e < 0) {
    negativos += 1;
  }

  impares = 5 - pares;

  

  printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", pares, impares, positivos, negativos);
  return 0;
}
