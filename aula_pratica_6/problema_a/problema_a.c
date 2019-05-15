#include <stdio.h>

int main()
{
  int numero_dimensoes, i, j, k, produto = 0;
  scanf("%d", &numero_dimensoes);

  int u[numero_dimensoes], v[numero_dimensoes];

  for (i = 0; i < numero_dimensoes; ++i) {
    scanf("%d", &u[i]);
  }

  for (j = 0; j < numero_dimensoes; ++j) {
    scanf("%d", &v[j]);
  }

  for (k = 0; k < numero_dimensoes; ++k) {
    produto += u[k] * v[k];
  }

  if (produto == 0) {
    printf("ortogonais\n");
  } else {
    printf("%d\n", produto);
  }

  
  return 0;
}
