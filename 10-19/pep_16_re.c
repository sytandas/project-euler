#include <stdio.h>
#include <math.h>

int main(void){
  	double x;
  	double sum = 0;
  	char c;
  	FILE *fp;
  
	x = pow(2, 1000);

	fp = fopen("power.txt",	"w");
  	fprintf(fp, "%lf", x);
  	fclose(fp);
  	
	fp = fopen("power.txt", "r");

	while((c = fgetc(fp)) != '.'){
    		sum = sum + (c - '0');
  	}

	fclose(fp);

	printf("%lf", sum);
  	return 0;
}
