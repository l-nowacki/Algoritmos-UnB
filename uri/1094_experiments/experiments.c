#include <stdio.h>

int main()
{
  int N, coelhos = 0, ratos = 0, sapos = 0, i, amount = 0, total = 0;
  char animal;

  scanf("%d", &N);

  for (i = 0; i < N; ++i) {
    scanf("%d %c", &amount, &animal);
    total += amount;
    if (animal == 67) {
      coelhos += amount;
    } else if (animal == 82) {
      ratos += amount;
    } else if (animal == 83) {
      sapos += amount;
    } 
  }

  printf("Total: %d cobaias\n", total);
  printf("Total de coelhos: %d\n", coelhos);
  printf("Total de ratos: %d\n", ratos );
  printf("Total de sapos: %d\n", sapos);
  printf("Percentual de coelhos: %.2lf %%\n", (coelhos * 100.00) / total);
  printf("Percentual de ratos: %.2lf %%\n", (ratos * 100.00) / total);
  printf("Percentual de sapos: %.2lf %%\n", (sapos * 100.00) / total);

  return 0;
}
