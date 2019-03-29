#include <stdio.h>

int main()
{
  float salary;
  float new_salary, amount;
  float percentual;
  scanf("%f", &salary);

  if (salary >= 0 && salary <= 400.00) {
    percentual = 15;
  } else if (salary > 400.00 && salary <= 800.00) {
    percentual = 12;
  } else if (salary > 800.00 && salary <= 1200.00) {
    percentual = 10;
  } else if (salary > 1200.00 && salary <= 2000.00) {
    percentual = 7;
  } else if (salary > 2000.00) {
    percentual = 4;
  }

  new_salary = salary * (1 + percentual / 100);
  amount = new_salary - salary;
  
  printf("Novo salario: %.2f\n", new_salary);
  printf("Reajuste ganho: %.2f\n", amount);
  printf("Em percentual: %.0f %%\n", percentual);
  
  return 0;
}
