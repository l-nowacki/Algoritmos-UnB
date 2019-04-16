#include <stdio.h>

int main()
{
  int tot, a, i, amount = 0;
  for (i = 0; i < 9; ++i) {
    scanf("%d", &a);
    amount += a;
  }

  tot = amount % 9;

  if (tot == 0) {
    printf("Rudolph\n");
  } else if (tot == 8) {
    printf("Blitzen\n");
  } else if (tot == 7) {
    printf("Donner\n");
  } else if (tot == 6) {
    printf("Cupid\n");
  } else if (tot == 5) {
    printf("Comet\n");
  } else if (tot == 4) {
    printf("Vixen\n");
  } else if (tot == 3) {
    printf("Prancer\n");
  } else if (tot == 2) {
    printf("Dancer\n");
  } else {
    printf("Dasher\n");
  }

  

  return 0;
}
