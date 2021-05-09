#include<iostream>
using namespace std;
/*
int main(){
	int add = 0;
	for (int i = 0; i <= 10; i++){
		add = add+i;
	}
	cout << add * add << "\n";

return 0;
}
*/

/*
int main(){
	int add = 0;
	for(int i = 0; i <= 10; i++){
		add = add + (i * i);		
	}
	cout << add << "\n";
}
*/

int main(){

	int sum_of_squares = 0;
	int square_of_sum = 0;
	int result = 0; 
	for(int i = 0; i  <= 100; i++){
		sum_of_squares = sum_of_squares + i;
	}
	for(int j = 0; j <= 100; j++){
		square_of_sum = square_of_sum + (j * j);	
	}
	result = ((sum_of_squares * sum_of_squares) - square_of_sum);
	cout << result << "\n";
return 0;
}

