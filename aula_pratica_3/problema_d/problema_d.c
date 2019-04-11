#include <stdio.h>


int main()
{
  long long N, i, j, k, test = 1;
  
  scanf("%lld", &N);
  long long array[N][N], now;

  
  for (i = 0; i < N; ++i) {
    for (j = 0; j < N; ++j) {
      scanf("%lld", &now);
      //only retain array information if it is on a diagonal
      if (i == j || i + j == N - 1) {
	array[i][j] = now;
      }
      if (i > 0 && j > N - 2) {
	k = N - 1 - i;
	//if the primary diagonal starts decreasing
	if (array[0][0] > array[1][1]) {
	  //if the primary diagonal keeps decreasing and the secondary diagonal increases
	  if (array[i][i] < array[i - 1][i - 1] && array[i][k] > array[i - 1][k + 1]) {
	    continue;
	  } else {
	    test = 0;
	  }
	}
	// if the primary diagonal starts increasing
	else if (array[0][0] < array[1][1]) {
	  //if the primary diagonal keeps increasing and the secondar diagonal decreases
	  if (array[i][i] > array[i - 1][i - 1] && array[i][k] < array[i - 1][k + 1]) {
	    continue;
	  } else {
	    test = 0;
	  }
	}
	// if the primary diagonal is equal
      else {
	  test = 0;
	}
      }
    }
  }

  if (test == 0) {
    printf("nada de especial\n");
  } else {
    printf("diagonais invertidas\n");
  }


  return 0;
}
