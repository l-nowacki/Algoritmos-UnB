#include <stdio.h>

int main()
{
  float income;

  scanf("%f", &income);

  if (income >= 0.00 && income <= 2000.00) {
    printf("Isento\n");
  } else if (income > 2000.00 && income <= 3000.00) {
    printf("R$ %.2f\n", (income - 2000.00) * 0.08);
  } else if (income > 3000.00 && income <= 4500.00) {
    printf("R$ %.2f\n", (income - 3000.00) * 0.18 + 80.00 );
  } else if (income > 4500.00) {
    printf("R$ %.2f\n", (income - 4500.00) * 0.28 + 350);
  }
  return 0;
}
