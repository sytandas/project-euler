#include<iostream>
#include<math.h>
using namespace std;
// A function to find largest prime factor
long long maxPrimeFactors(long long n)
{
	long long maxPrime = -1;
	while (n % 2 == 0) {
		maxPrime = 2;
		n >>= 1; // equivalent to n /= 2
	}
	for (int i = 3; i <= sqrt(n); i += 2) {
		while (n % i == 0) {
			maxPrime = i;
			n = n / i;
		}
	}

	// This condition is to handle the case
	// when n is a prime number greater than 2
	if (n > 2)
		maxPrime = n;
	return maxPrime;
}

int main()
{
	long long n = 15;
	cout << maxPrimeFactors(n) << endl;

	n = 600851475143;
	cout << maxPrimeFactors(n);
}

// Answer: 6857
