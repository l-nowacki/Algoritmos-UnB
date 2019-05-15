#include <stdio.h>

int main()
{
  int N, i, j, k, inversoes = 0;
  scanf("%d", &N);

  int array[N];

  for (i = 0; i < N; ++i) {
    scanf("%d", &array[i]);
  }

  for (j = 0; j < N; ++j) {
    for (k = j + 1; k < N; ++k) {
      if (array[j] > array[k]) {
	inversoes += 1;
      }
    }
  }

  printf("%d\n", inversoes);

  
  return 0;
}
