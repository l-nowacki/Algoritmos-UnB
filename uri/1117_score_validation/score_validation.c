#include <stdio.h>

int main()
{
  float score, media = 0.0;
  int valid = 0;

  while (1) {
    scanf("%f", &score);
    if (score < 0.0 || score > 10.0) {
      printf("nota invalida\n");
    } else if (valid == 1) {
      media += score;
      printf("media = %.2f\n", media / 2);
      break;
    } else {
      media += score;
      valid += 1;
    }
  }
  return 0;
}
