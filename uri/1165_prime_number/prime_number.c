#include <stdio.h>

int main()
{
  int N, now, i, j;

  scanf("%d", &N);
  

  for (i = 0; i < N; ++i) {
    scanf("%d", &now);
    for (j = 2; j <= now; ++j) {
      if (j == now) {
	printf("%d eh primo\n", now);
	break;
      } else if (now % j == 0) {
	printf("%d nao eh primo\n", now);
	break;
      } else {
	continue;
      }
    }
  }

  
  return 0;
}
