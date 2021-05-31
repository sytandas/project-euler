#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main(void){
	
	double i;
	double j;	
	double k = 10;
	double sum = 0;
	double rem;
	
	i = pow(2, 1000);
	printf("%lf" , i);

	j = i;

	while (j != 0){
		rem = fmod(j, k);
		sum = sum + rem;
		j = j / 10;
	}
	printf("\n%lf", sum);
	return 0;
}
