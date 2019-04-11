#include <stdio.h>

int main()
{
  long long N, i, j, now, test = 2;
  
  scanf("%lld", &N);

  int primary[N], secondary[N];
  
  for (i = 0; i < N; ++i) {
    for (j = 0; j < N; ++j) {
      scanf("%lld", &now);
      if (i == j) {
	primary[i] = now;
      }
      if (i + j == N - 1) {
	secondary[i] = now;
      }
    }
  }


  if (primary[1] > primary[0] && secondary[1] < secondary[0]) {
    for (i = 0; i < N - 1; ++i) {
      if (primary[i + 1] > primary[i] && secondary[i + 1] < secondary[i]) {
	continue;
      } else {
	test = 0;
	break;
      }
    }
  } else if (primary[1] < primary[0] && secondary[1] > secondary[0]) {
    for (i = 0; i < N - 1; ++i) {
      if (primary[i + 1] < primary[i] && secondary[i + 1] > secondary[i]) {
	continue;
      } else {
	test = 0;
	break;
      }
    }
  } else {
    test = 0;
  }

  if (test == 0) {
    printf("nada de especial\n");
  } else {
    printf("diagonais invertidas\n");
  }
  

  return 0;
}
