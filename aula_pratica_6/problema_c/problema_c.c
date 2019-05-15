#include <stdio.h>

int main()
{

  int N, Q, index, nova_nota, i;
  char operation;

  scanf("%d %d", &N, &Q);

  int array[N];

  for (i = 0; i < N; ++i) {
    scanf("%d", &array[i]);
  }

  for (i = 0; i < Q; ++i) {
    scanf("%s %d", &operation, &index);

    if (operation == 'R') {
      printf("%d\n", array[index - 1]);
    } else if (operation == 'U') {
      scanf("%d", &nova_nota);
      array[index - 1] = nova_nota;
    }
  }


  
  return 0;
}

