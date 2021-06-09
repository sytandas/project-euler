#include<stdio.h>

int main(){

	int long i, j, add = 0, prime;
	for(i = 2; i <= 2000000; i++){
	
		prime = 1;
		for(j = 2; j <= i / 2; j++){
			if(i % j == 0){
				prime = 0;
				//count++;
				break;
			}
		}

	if(prime == 1)
	{
		add += i;
	}
}


printf("%ld \n", add);	
return 0;
}
