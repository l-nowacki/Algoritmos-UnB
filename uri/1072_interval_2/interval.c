#include <stdio.h>

int main()
{
  int n, i, now, in, out;

  scanf("%d", &n);

  in = 0;
  out = 0;

  for (i = 0; i < n; ++i) {
    scanf("%d", &now);
    if (now <= 20 && now >= 10 ) {
      in += 1;
    } else {
      out += 1;
    }
  }

  printf("%d in\n", in);
  printf("%d out\n", out);
  return 0;
}
