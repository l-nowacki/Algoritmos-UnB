#include <stdio.h>

int main()
{
  int i, bigger, now, position;
  position = 1;
  bigger = 0;

  for (i = 1; i < 101; ++i) {
    scanf("%d", &now);
    if (now > bigger) {
      bigger = now;
      position = i;
    }
  }

  printf("%d\n%d\n", bigger, position);

  return 0;
}
