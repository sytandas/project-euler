// numbering of the prime from start to 10001
#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> primes;
	primes.reserve(10001);
	primes.push_back(2);
	for (int x = 3; primes.size() <= 10000; x += 2)
	{
		bool isPrime = true;
		for (auto p : primes){
			if ( x % p == 0){
				isPrime = false;
				break;
			}
		
			if (p * p > x)
				break;
		}
		
		if(isPrime)
			primes.push_back(x);
	}

	int test;
	cin >> test;
	while(test--){
		int x;
		cin >> x;

		x--;
		if (x < primes.size())
			cout << primes[x] << "\n";
		else
			cout << "ERROR" << "\n";	
		
	}

	return 0;

}



