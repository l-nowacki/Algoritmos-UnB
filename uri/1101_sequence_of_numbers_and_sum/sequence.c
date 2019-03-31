#include <stdio.h>

int max(int param1, int param2);
int min(int param1, int param2);


int main()
{
  int m, n;
  int menor, maior;
  int sum, i;

      
  while (1) {
    scanf("%d %d", &m, &n);
    
    if (m <= 0 || n <= 0) {
      break;
    } else {
      menor = min(m, n);
      maior = max(m, n);
      
      sum = (maior + menor) * (maior - menor + 1) / 2;

      for (i = menor; i <= maior; ++i) {
	printf("%d ", i);
      }
      printf("Sum=%d\n", sum);
      continue;
    }
  }
  
  return 0;
}

int max (int param1, int param2) {
  
  if (param1 > param2) {
    return param1; 
  } else {
    return param2;
  }
}

int min (int param1, int param2) {
  if (param1 > param2) {
    return param2;
  } else {
    return param1;
  }
}



