#include <stdio.h>

int main()
{
  char name[20];
  double salary, sales;

  scanf("%s %lf %lf", name, &salary, &sales);

  printf("TOTAL = R$ %.2lf\n", salary + (0.15 * sales) );
  return 0;
}
