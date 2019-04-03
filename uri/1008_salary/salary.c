#include <stdio.h>

int main()
{
  int number, hours;
  double per_hour;

  scanf("%d %d %lf", &number, &hours, &per_hour);
  
  printf("NUMBER = %d\nSALARY = U$ %.2lf\n", number, hours * per_hour);
  return 0;
}
