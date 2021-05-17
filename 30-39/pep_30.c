#include<stdio.h>
#include<math.h>

#define M 355555
#define E 5

int main(){
	
	char buf[16];	
	int i, tl, result = 0;
	for (int i = 2; i < M; i++){
		int sum = 0, j;	
		snprintf(buf, sizeof buf, "%d", i);	
		for (j = 0; buf[j]; j++){
			sum += pow(buf[j] - '0', E);
		}

		if (i == sum){
			tl += i;
		}
	}
	printf("%d \n", tl);
	
	return 0;
}
