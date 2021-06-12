#include <stdio.h>

#define N 10000

static int divisors_sum(int n);

int main(void){
  int i, d, sum = 0;

  for (i = 2; i < N; i++){
    d = divisors_sum(i);
    if (i < d && i == divisors_sum(d)) {
      sum += i + d;
    }
  }
  printf("%d\n", sum);

  return 0;
}

int divisors_sum(int n){
  int sum = 1;
  int i, j = n;

  for (i = 2; i <= j; i++){
    int p = 1;
    while (j % i == 0){
      p *= i;
      j /= i;
    }
    sum *= (p * i - 1)/(i - 1);
  }
  return sum - n;
}


