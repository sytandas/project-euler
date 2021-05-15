// Collatz conjecture  


#include<stdio.h>

static unsigned collatz_count(unsigned num);

int main(void){
	unsigned i, maxC = 0, maxI = 0;

	for ( int i = 1; i < 1000000; i++){
		unsigned c = collatz_count(i);
		if ( c > maxC){
			maxC = c;
			maxI = i;
		}
	}

	printf("%u \n", maxI);

	return 0;
}

unsigned collatz_count(unsigned n){
	
	unsigned c = 0;
	
	while (n > 1){
		n = n%2 == 0 ? n/2 : 3*n+1;
	   	c++;
	}
	return c+1;
}

