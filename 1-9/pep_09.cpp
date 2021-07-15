// i + j = k, i^2 + j^2 = k^2

#include<iostream>
using namespace std;

void pythagoreanTriplet(int n){

	for(int i = 1; i <= n / 3; i++){
		for(int j= i+1; j <= n / 2; j++){
				int k = n - i - j;
				if( (i * i) + (j * j) == (k * k) ){
					cout << i << "\n" << j << "\n" << k << "\n";
					cout << i * j * k << "\n";
					return;
				}
		} 
	}
	cout << "No triplet";
}


int main(){
	int n = 1000;
	pythagoreanTriplet(n);
	return 0;
}

// Answer:  31875000
