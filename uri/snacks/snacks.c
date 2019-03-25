#include <stdio.h>

int main()
{
  int code, amount;
  float result;

  scanf("%d %d", &code, &amount);

  switch (code) {
  case 1: {
    printf("Total: R$ %.2f\n", 4.00 * amount);
    break;
  }
  case 2: {
    printf("Total: R$ %.2f\n", 4.50 * amount);
    break;
  }
  case 3: {
    printf("Total: R$ %.2f\n", 5.00 * amount);
    break;
  }
  case 4: {
    printf("Total: R$ %.2f\n", 2.00 * amount);
    break;
  }
  case 5: {
    printf("Total: R$ %.2f\n", 1.50 * amount);
    break;
  }
default:
    break;
  }
  return 0;
}
