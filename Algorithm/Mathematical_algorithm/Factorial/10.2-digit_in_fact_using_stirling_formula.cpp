#include <cmath>
#include <iostream>
using namespace std;

int countDigitsInFactorial(int n)
{
	if (n < 0) {
		return 0;
	}
	if (n <= 1) {
		return 1;
	}
	double x
		= (n * log10(n / M_E) + log10(2 * M_PI * n) / 2.0);
	return floor(x) + 1;
}

int main()
{
	cout << countDigitsInFactorial(1) << endl;
	cout << countDigitsInFactorial(5) << endl;
	cout << countDigitsInFactorial(10) << endl;
	cout << countDigitsInFactorial(120) << endl;

	return 0;
}
