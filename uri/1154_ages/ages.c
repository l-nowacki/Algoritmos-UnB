#include <stdio.h>

int main()
{
  int total = 0, now, many = 0;
  double average;
  while (1) {
    scanf("%d", &now);
    if (now < 0) {
      break;
    } else {
      total += now;
      many += 1;
    }
  }

  average = total * 1.0 / many;

  printf("%.2lf\n", average);
  
  return 0;
}
