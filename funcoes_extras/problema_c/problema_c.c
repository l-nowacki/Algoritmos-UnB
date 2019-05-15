#include <stdio.h>

const int primo = 1000003;

long long inverso(long long x){

    long long resultado = 1, expoente = primo - 2;

    while(expoente--) {
      resultado = (resultado * x) % primo;
    }

    return resultado;

}

long long produto(long long a, long long b) {
  return ((a % primo) * (b % primo)) % primo;
}

long long fat(int n) {

  long long i, result = 1;

  for (i = 2; i <= n; ++i) {
    result = produto(result, i);
  }

  return result;

}


int main()
{

  long long n, k, result;

  scanf("%lld %lld", &n, &k);

  result = produto(fat(n), inverso(produto(fat(k), fat(n - k))));

  printf("%lld\n", result);
  
  return 0;
}
