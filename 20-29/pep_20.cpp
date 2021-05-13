#include<iostream>
#include<vector>

using namespace std;

void multiply(vector<int> &v, int x){

	int c = 0;
	int res;
	int size = v.size();
	for (int i = 0; i < size; i++){
		int res = c + v[i] * x;
		v[i] = res % 10;
		c = res / 10;
	}
	while (c != 0){
		v.push_back(c % 10);
		c /= 10;
	}
	
}
int sumOfDigits(int n){
	vector<int> v;
	v.push_back(1);

	for (int i = 1; i <= n; i++)
		multiply(v, i);


	int sum = 0;
	int size = v.size();
	for (int i = 0; i < size; i++)
		sum += v[i];
	return sum;

}

int main(void){
	
	int n = 100;
	cout << sumOfDigits(n) << "\n";
	return 0;

}
