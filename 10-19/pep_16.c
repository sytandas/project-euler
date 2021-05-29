#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main(void){
	
	long double j;
	int i;	
	char buffer[100000];
	int sum = 0;
	j = pow(2, 1000);
	//printf("%Lf" , j);

		
	//itoa(j, buffer, 10);
	snprintf(buffer, 994, "%Lf", j);	
	


	return 0;
}
/*
char * convertNumberIntoArray(unsigned int number) {
	int length = (int)floor(log10((float)number)) + 1;
	char * arr = new char[length];
	int i = 0;
	do {
		arr[i] = number % 10;
		number /= 10;
		i++;
	} while (number != 0);
	return arr;
}
*/
