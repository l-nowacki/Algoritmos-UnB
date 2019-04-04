#include <stdio.h>

int main()
{
  int N, i, now;
  scanf("%d", &N);

  for (i = 0; i < N; ++i) {
   scanf("%d", &now);
   if (now == 0) {
     printf("NULL\n");
     continue;
   }
   
   if (now % 2 == 0) {
     printf("EVEN ");
   } else {
     printf("ODD ");
   }

   if (now > 0) {
     printf("POSITIVE\n");
   } else if (now < 0) {
     printf("NEGATIVE\n");
   }
   
  }

  return 0;
}
