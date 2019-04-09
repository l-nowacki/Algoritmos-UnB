#include <stdio.h>

int main()
{
  int alcool = 0, gasolina = 0, diesel = 0, code;
  
  while (1) {
    scanf("%d", &code);

    if (code == 1) {
      alcool += 1;
      continue;
    } else if (code == 2) {
      gasolina += 1;
      continue;
    } else if (code == 3) {
      diesel += 1;
    } else if (code == 4) {
      break;
    } else {
      continue;
    }
  }

  printf("MUITO OBRIGADO\n");
  printf("Alcool: %d\n", alcool);
  printf("Gasolina: %d\n", gasolina);
  printf("Diesel: %d\n", diesel);
  
  return 0;
}
