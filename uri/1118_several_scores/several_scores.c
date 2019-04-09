#include <stdio.h>

int main()
{
  float score, media = 0.0;
  int valid = 0, x, terminate = 0;

  while (1) {

    if (terminate == 1) {
      break;
    }
    scanf("%f", &score);
    if (score < 0.0 || score > 10.0) {
      printf("nota invalida\n");
    } else if (valid == 1) {
      media += score;
      printf("media = %.2f\n", media / 2);
     
      while (1) {
	printf("novo calculo (1-sim 2-nao)\n");
	scanf("%d", &x);
	if (x == 1) {
	  terminate = 0;
	  media = 0;
	  valid = 0;
	  break;
	} else if (x == 2) {
	  terminate = 1;
	  break;
	} else {
	  continue;
	}
      }
      
    } else {
      media += score;
      valid += 1;
    }
  }

  return 0;
}
