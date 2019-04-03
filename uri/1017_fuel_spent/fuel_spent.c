#include <stdio.h>

int main()
{
  int spent_time, average_speed;

  scanf("%d %d", &spent_time, &average_speed);

  printf("%.3lf\n", spent_time * average_speed / 12.0);
  
  return 0;
}
