#include <stdio.h>

int main()
{
  int total_distance;
  double spent_fuel, average_consumption;

  scanf("%d %lf", &total_distance, &spent_fuel);

  average_consumption = total_distance / spent_fuel;
  
  printf("%.3lf km/l\n", average_consumption );
  return 0;
}
