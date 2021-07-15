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

// Answer:  232792560
