#include <stdio.h>

int main()
{
  int input_dias;
  int anos, meses, dias;

  anos = 0;
  meses = 0;
  dias = 0;

  scanf("%d", &input_dias);

  while (input_dias > 0) {
    if (input_dias >= 365) {
      input_dias -= 365;
      anos += 1;
    } else if (input_dias >= 30) {
      input_dias -= 30;
      meses += 1;
    } else {
      dias = input_dias;
      break;
    }
  }

  printf("%d ano(s)\n", anos);
  printf("%d mes(es)\n", meses);
  printf("%d dia(s)\n", dias);

  return 0;
}
