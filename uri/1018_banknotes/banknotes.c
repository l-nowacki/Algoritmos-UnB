#include <stdio.h>

int main()
{
  int money;
  int notas_100 = 0, notas_50 = 0, notas_20 = 0, notas_10 = 0, notas_5 = 0, notas_2 = 0,       notas_1 = 0 ;
 
 

  scanf("%d", &money);
  printf("%d\n", money);


  while (money > 0) {
    if (money >= 100) {
      money -= 100;
      notas_100++;
    } else if (money >= 50) {
      money -= 50;
      notas_50++;
    } else if (money >= 20) {
      money -= 20;
      notas_20++;
    } else if (money >= 10) {
      money -= 10;
      notas_10++;
    } else if (money >= 5) {
      money -= 5;
      notas_5++;
    } else if (money >= 2) {
      money -= 2;
      notas_2++;
    } else if (money >= 1) {
      money -= 1;
      notas_1++;
    }
  }

  printf("%d nota(s) de R$ 100,00\n", notas_100);
  printf("%d nota(s) de R$ 50,00\n", notas_50);
  printf("%d nota(s) de R$ 20,00\n", notas_20);
  printf("%d nota(s) de R$ 10,00\n", notas_10);
  printf("%d nota(s) de R$ 5,00\n", notas_5);
  printf("%d nota(s) de R$ 2,00\n", notas_2);
  printf("%d nota(s) de R$ 1,00\n", notas_1);


  
  return 0;
}
