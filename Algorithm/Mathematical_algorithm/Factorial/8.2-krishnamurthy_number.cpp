#include <iostream>
using namespace std;

int factorial[10];

void precomputeFactorials() {
	factorial[0] = 1;
	for (int i = 1; i < 10; i++) {
		factorial[i] = i * factorial[i-1];
	}
}

bool isKrishnamurthy(int n) {
	int sum = 0;
	int temp = n;
	while (temp > 0) {
		int digit = temp % 10;
		sum += factorial[digit];
		temp /= 10;
	}
	return (sum == n);
}

int main() {
	precomputeFactorials();
	int n = 145;
	if (isKrishnamurthy(n)) {
		cout <<"YES" << endl;
	} else {
		cout <<"NO" << endl;
	}
	return 0;
}
