#include <stdio.h>

int main()
{
  long long amigos, preco, cada, i, total = 0, media;

  scanf("%lld %lld", &amigos, &preco);

  for (i = 0; i < amigos; ++i) {
    scanf("%lld", &cada);
    total += cada;
  }

  media = total / amigos;
  
  printf("media : %lld\n", media);

  if (preco <= media) {
    printf("o rock reinara mais uma vez\n");
  } else {
    printf("rockeiros trabalhando ja\n");
  }


  return 0;
}
