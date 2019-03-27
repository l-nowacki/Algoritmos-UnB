#include <stdio.h>

int main()
{
  int x, y, w, h;
  int a, b;

  scanf("%d %d %d %d", &x, &y, &w, &h);

  scanf("%d %d", &a, &b);

  if (h >= 0) {
    if (a > x && a < x + w && b > y && b < y + h) {
	printf("dentro\n");
      } else if (a == x && b <= y + h && b >= y || b == y && a <= x + w && a >= x ||
		 a == x + w && b <= y + h && b >= y || b == y + h && a <= x + w && a >= x) {
	printf("sobre a borda\n");
      } else {
	printf("fora\n");
      }
  } 


  return 0;
}
