#include <stdio.h>

int main()
{
  int N, a, b, no_elevador = 0;
  scanf("%d", &N);

  for (int i = 0; i < N; ++i) {
    scanf("%d %d", &a, &b);

    no_elevador -= a;
    no_elevador += b;
    
    if (no_elevador > 15) {
      printf("Excesso de Passageiros. Devem sair %d\n", no_elevador - 15);
      no_elevador = 15;
    }

    
  }

  printf("%d pessoas vao descer\n", no_elevador);

  return 0;
}
