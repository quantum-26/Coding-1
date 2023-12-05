// C++ program to find Primorial of given numbers
#include<bits/stdc++.h>
using namespace std;
const int MAX = 1000000;

// vector to store all prime less than and equal to 10^6
vector <int> primes;

// Function for sieve of sundaram. This function stores all
// prime numbers less than MAX in primes
void sieveSundaram()
{
	// In general Sieve of Sundaram, produces primes smaller
	// than (2*x + 2) for a number given number x. Since
	// we want primes smaller than MAX, we reduce MAX to half
	// This array is used to separate numbers of the form
	// i+j+2ij from others where 1 <= i <= j
	bool marked[MAX/2 + 1] = {0};

	// Main logic of Sundaram. Mark all numbers which
	// do not generate prime number by doing 2*i+1
	for (int i = 1; i <= (sqrt(MAX)-1)/2 ; i++)
		for (int j = (i*(i+1))<<1 ; j <= MAX/2 ; j += 2*i +1)
			marked[j] = true;

	// Since 2 is a prime number
	primes.push_back(2);

	// Print other primes. Remaining primes are of the
	// form 2*i + 1 such that marked[i] is false.
	for (int i=1; i<=MAX/2; i++)
		if (marked[i] == false)
			primes.push_back(2*i + 1);
}

// Function to calculate primorial of n
int calculatePrimorial(int n)
{
	// Multiply first n primes
	int result = 1;
	for (int i=0; i<n; i++)
	result = result * primes[i];
	return result;
}

// Driver code
int main()
{
	int n = 5;
	sieveSundaram();
	for (int i = 1 ; i<= n; i++)
		cout << "Primorial(P#) of " << i << " is "
			<< calculatePrimorial(i) <<endl;
	return 0;
}
