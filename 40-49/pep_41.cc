#include <iostream>
#include <math.h>
#include <numeric>
#include <algorithm>

using namespace std;

template <typename T>

struct fun{
	T operator()(T a, T b) const
	{
		return 10 * a + b;
	}
};

static bool isPrime(unsigned n);

int main(){

	int a[] = {9,8,7,6,5,4,3,2,1};
	static const size_t N = 9;

	for (unsigned i = 0; i < N; i++){
		do{
			int n = accumulate(a + i, a+ N, 0, fun<int>());
			if (isPrime(n)) {
				cout << n << "\n";
				goto FINISH;
			}
		} while (prev_permutation(a + i, a + N));
	}

FINISH:
	return 0;
}

bool isPrime(unsigned n){
	if (n == 1){
		return false;
	}
	else if (n % 2 == 0){
		return n == 2;
	}
	else {
		for (unsigned d = 3; d * d < n; d += 2){
			if (n % d == 0){
				return false;
			}
		}
		return true;
	}
}
