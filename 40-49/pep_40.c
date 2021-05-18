// Chempernowne constant - 0.123456789101112131415161718192021...

#include <stdio.h>
#include <math.h>
#include <time.h>

int main(void){

	int nth = 1;
	int i = 0;
	unsigned int d[7], l;
       	int p = 1;
	
	double time_spent = 0.0;

	clock_t begin = clock();

	for( i = 1, l = 0; l < 7; i++){
		int digi = log10(i) + 1;
		int j; 
		for (j = 0; j < digi; j++, nth++){
			if (nth == pow(10, l)){
				d[l++] = (i / (int)pow(10, digi-j-1)) % 10; 
			}
		}
	}
	
	for (i = 0; i < l; i++){
		p *= d[i];
	}
	printf("%d \n", p);

	clock_t end = clock();
	time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
	printf("%f \n", time_spent);

	return 0;
}
			
