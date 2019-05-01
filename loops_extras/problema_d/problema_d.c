#include <stdio.h>

int main()
{
  int G, J, gustavo = 140, juliano = 110, anos = 0;
  scanf("%d %d", &G, &J);

  do
    {
      gustavo += G;
      juliano += J;
      anos++;
    } while (gustavo >= juliano);

  printf("%d\n", anos);
  
  return 0;
}
