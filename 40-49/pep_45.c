#include<stdio.h>
#include<math.h>
#include<time.h>
int is_triangle(unsigned long long n);
int pentagonal(unsigned long long n);
unsigned long long hexagonal(unsigned long long n);

int main(void){
 	
	double time_spent = 0;
	clock_t begin = clock();

	unsigned long long h, i;
	for (i = 144; !(pentagonal(h = hexagonal(i)) && is_triangle(h)); i++);
	printf("%llu \n", h);	

	clock_t end = clock();
	time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
	printf("\n %f in sec ", time_spent);

	return 0;
}

int is_triangle(unsigned long long n){
	
	unsigned long long sq = sqrt(1+8*n);
	return sq*sq == 1+8*n && (sq-1) % 2 == 0;

}

int pentagonal(unsigned long long n){

	unsigned long long sq = sqrt(1+24*n);
	return sq * sq == 1+24*n && (1+sq) % 6 == 0;
}

unsigned long long hexagonal(unsigned long long n){

	return n*(2*n-1);
}



