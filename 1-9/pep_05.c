// smallest multiplier - 2520 is the smallest number tht can be divided by each of the numbers 
//form 1 to 10 without anu remainder, what is the smallest positive number that is evenly 
//divisible by all the numbers from 1 to 20

#include<stdio.h>
int main(){
	int x, y, small;
	x = y = 1;
	small = 0;
	while (x > 0){
		y = 1; 
		while ((x % y == 0) && (y <= 20)){
			if(y == 20){
				small = x;
				break;
			}
			y++;
		}
		x++;

		if(small > 0){
			break;	
		}
	}
	printf("%d", small);
return 0;
}
