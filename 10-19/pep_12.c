#include <stdio.h>

static unsigned divisor(unsigned long n);

int main(void){
	
	unsigned long i = 1, n = 1;
	while (divisor(n) < 500){
		n += ++i;
	}
	printf("%lu\n", n);
	return 0;
}

unsigned divisor(unsigned long n){
	unsigned r = 1;
	unsigned long i;

	for (i = 2; i <= n; i++){
		unsigned c = 0;
		while (n % i == 0){
			c++;
			n /= i;
		}
		r *= c + 1;
	}
	return r;
}
