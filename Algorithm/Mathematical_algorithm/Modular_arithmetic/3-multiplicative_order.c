// C++ program to implement multiplicative order
#include<bits/stdc++.h>
using namespace std;

// function for GCD
int GCD ( int a , int b )
{
	if (b == 0 )
		return a;
	return GCD( b , a%b ) ;
}

// Function return smallest +ve integer that
// holds condition A^k(mod N ) = 1
int multiplicativeOrder(int A, int N)
{
	if (GCD(A, N ) != 1)
		return -1;

	// result store power of A that raised to
	// the power N-1
	unsigned int result = 1;

	int K = 1 ;
	while (K < N)
	{
		// modular arithmetic
		result = (result * A) % N ;

		// return smallest +ve integer
		if (result == 1)
			return K;

		// increment power
		K++;
	}

	return -1 ;
}

//driver program to test above function
int main()
{
	int A = 4 , N = 7;
	cout << multiplicativeOrder(A, N);
	return 0;
}
