#include <stdio.h>
#include <math.h>

int main() {
  int dias;

  float A;
  float M;
  float D;

  scanf("%d", &dias);

  A = floor(dias / 365);
  M = floor( (dias % 365) / 30);
  D = (dias % 365) % 30;

  printf("%.0f %.0f %.0f \n", A, M, D);
  
  return 0;
}



