#include <stdio.h>

int main()
{
  int gols_inter, gols_gremio, vitoria_inter = 0, vitoria_gremio = 0, empate = 0, novo_jogo;

  while (1) {
    scanf("%d %d", &gols_inter, &gols_gremio);

    if (gols_inter > gols_gremio) {
      vitoria_inter += 1;
    } else if (gols_gremio > gols_inter) {
      vitoria_gremio += 1;
    } else {
      empate += 1;
    }
    
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &novo_jogo);

    if (novo_jogo == 2) {
      printf("%d grenais\n", vitoria_inter + vitoria_gremio + empate);
      printf("Inter:%d\n", vitoria_inter);
      printf("Gremio:%d\n", vitoria_gremio);
      printf("Empates:%d\n", empate);
      if (vitoria_gremio > vitoria_inter) {
	printf("Gremio venceu mais\n");
      } else if (vitoria_inter > vitoria_gremio) {
	printf("Inter venceu mais\n");
      } else {
	printf("Nao houve vencedor\n");
      }
      break;
    } else if (novo_jogo == 1) {
      continue;
    }
    
  }
  return 0;
}
