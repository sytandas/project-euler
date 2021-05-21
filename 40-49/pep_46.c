#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define N 10000

static int is_square(unsigned n);
char *prime_seive(unsigned n);

int main(void){
	
	char *seive = prime_seive(N);
	unsigned *primes = malloc(sizeof(unsigned) * N);
	unsigned i, j = 0;

	for (i = 0; i < N; i++){
		if (!seive[i]){
			primes[j++] = i;
		}
	}
	primes[j] = 0;

	for (i = 3; i < N; i += 2){
		if (!seive[i]){
			continue;
			// skip if i is prime
		}
	for (j = 0; primes[j]; j++){
		unsigned s;
		
		if (primes[j] > i){
			printf("%u \n", i);
			goto FINISH;
		}

		s = (i - primes[j]) / 2;
		if (is_square(s)) {
			break;
		}
	}
	}
	
FINISH:
	free(seive);
	free(primes);

	return 0;
}

char *prime_seive(unsigned n){
	char *seive = calloc(n, sizeof *seive);
	unsigned i;
	seive[0] = seive[1] = 1;
	for (i = 2; i < n; i++){
		if (!seive[i]){
			unsigned j;
			for (j = i * 2; j < n; j += i){
				seive[j] = 1;
			}
		}
	}
	return seive;
}

int is_square(unsigned n){
	unsigned sq = sqrt(n);
	return sq * sq == n;
}



