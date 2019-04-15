#include <stdio.h>
#include <math.h>

int main()
{
  int T, pa, pb, years = 0, i;
  double ga, gb;

  scanf("%d", &T);
  

  for (i = 0; i < T; ++i) {
    scanf("%d %d %lf %lf", &pa, &pb, &ga, &gb);
    while (pa <= pb) {
      if (years > 100) {
	break;
      } else {
	pa = floor(pa * (1 + (ga / 100)));
        pb = floor(pb * (1 + (gb / 100)));
	years += 1;
      }
    }
    
    if (years > 100) {
      printf("Mais de 1 seculo.\n");
    } else {
      printf("%d anos.\n", years);
    }
    years = 0;
  }

  return 0;
}
