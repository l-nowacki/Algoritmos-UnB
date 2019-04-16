#include <stdio.h>

int main()
{
  int N, i, escadinhas = 1;
  long long now, before, first, reason;
  
  scanf("%d", &N);

  if (N == 1) {
    scanf("%lld", &now);
    printf("1\n");
  }

  else {
    
    scanf("%lld %lld", &first, &before);
    reason = before - first;
    
    for (i = 2; i < N; ++i) {
      scanf("%lld", &now);
      if (reason == now - before) {
	before = now;
	continue;
      } else {
	escadinhas += 1;
	reason = now - before;
	before = now;
      }
    }
    
    printf("%d\n", escadinhas);
    
  }

  return 0;
}
