#include <stdio.h>
#include <limits.h>
#include <math.h>

#define N 10000

static unsigned penta(int p);
static int is_penta(unsigned p);
int main(void){

	unsigned i, j;
	unsigned min = UINT_MAX;
	for (i = 1; i < N; i++){
		for (j = i; j < N; j++){
			unsigned k = penta(i);
			unsigned l = penta(j);
			if(is_penta(k+l) && is_penta(l-k)){
				if (l-k < min){
					min = l -k;
				}
			}
		}
	}

	printf("%d \n", min);


	return 0;
}


unsigned  penta(int p){
	return p*(3*p-1)/2;
}

int is_penta(unsigned p){
	unsigned sq = sqrt(1+24*p);
	return sq*sq == 1+24*p && (1+sq) % 6 == 0;
}

