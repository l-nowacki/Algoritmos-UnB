#include <stdio.h>

int main()
{
  int V, i;
  long long tot;

  scanf("%d", &V);
  tot = V;

  for (i = 0; i < 10; ++i) {
    printf("N[%d] = %lld\n", i, tot);
    tot *= 2;
  }

  return 0;
}
