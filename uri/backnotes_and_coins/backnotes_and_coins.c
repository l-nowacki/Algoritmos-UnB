#include <stdio.h>

int main()
{
  float amount;
  int money;
  int notas_100 = 0, notas_50 = 0, notas_20 = 0, notas_10 = 0, notas_5 = 0, notas_2 = 0;
  int moedas_100 = 0, moedas_50 = 0, moedas_25 = 0, moedas_10 = 0, moedas_5 = 0,
      moedas_1 = 0;

  scanf("%f", &amount);
  money = amount * 100;

  while (money > 0) {
    if (money >= 10000) {
      money -= 10000;
      notas_100++;
    } else if (money >= 5000) {
      money -= 5000;
      notas_50++;
    } else if (money >= 2000) {
      money -= 2000;
      notas_20++;
    } else if (money >= 1000) {
      money -= 1000;
      notas_10++;
    } else if (money >= 500) {
      money -= 500;
      notas_5++;
    } else if (money >= 200) {
      money -= 200;
      notas_2++;
    } else if (money >= 100) {
      money -= 100;
      moedas_100++;
    } else if (money >= 50) {
      money -= 50;
      moedas_50++;
    } else if (money >= 25) {
      money -= 25;
      moedas_25++;
    } else if (money >= 10) {
      money -= 10;
      moedas_10++;
    } else if (money >= 5) {
      money -= 5;
      moedas_5++;	
    } else if (money >= 1) {
      money -= 1;
      moedas_1++;
    }
  }

  
  



  printf("NOTAS:\n");
  printf("%d nota(s) de R$ 100.00\n", notas_100);
  printf("%d nota(s) de R$ 50.00\n", notas_50);
  printf("%d nota(s) de R$ 20.00\n", notas_20);
  printf("%d nota(s) de R$ 10.00\n", notas_10);
  printf("%d nota(s) de R$ 5.00\n", notas_5);
  printf("%d nota(s) de R$ 2.00\n", notas_2);

  printf("MOEDAS:\n");
  printf("%d moeda(s) de R$ 1.00\n", moedas_100);
  printf("%d moeda(s) de R$ 0.50\n", moedas_50);
  printf("%d moeda(s) de R$ 0.25\n", moedas_25);
  printf("%d moeda(s) de R$ 0.10\n", moedas_10);
  printf("%d moeda(s) de R$ 0.05\n", moedas_5);
  printf("%d moeda(s) de R$ 0.01\n", moedas_1);
  
  return 0;
}
