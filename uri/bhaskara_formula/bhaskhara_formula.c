#include <stdio.h>
#include <math.h>

int main()
{
  float A, B, C;
  float delta;
  float positive_result, negative_result;
  
  scanf("%f %f %f", &A, &B, &C);

  delta = pow(B, 2) - (4 * A * C);

  //printf("%f \n", delta);

  if (delta >= 0 && A > 0) {
    positive_result = (-B + sqrt(delta)) / (2 * A);
    negative_result = (-B - sqrt(delta)) / (2 * A);

    printf("R1 = %.5f\nR2 = %.5f\n", positive_result, negative_result);
  } else {
    printf("Impossivel calcular\n");
  }
  

  
  return 0;
}
