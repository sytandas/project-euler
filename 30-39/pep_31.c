#include<stdio.h>

int main(){

	int y = 200;
	int z = 0;
	int a, b, c, d, e, f, g, h;
	
	for(a = 0; a <= y; a += 200)
	  	for (b = 0; b <= y; b+= 100)
			for (c = 0; c <= y; c+= 50)
	      			for (d = 0; d <= y; d+= 20)
					for ( e = 0; e <= y; e+= 10)
						for ( f = 0; f <= y; f+= 5)
							for ( g = 0; g <= y; g+= 2)
								if ( a + b + c + d + e + f + g + h <= 200)
							 		z++;						
	printf("%d\n", z);
	return 0;

}

