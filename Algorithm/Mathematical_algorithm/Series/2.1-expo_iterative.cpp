#include <bits/stdc++.h>
using namespace std;

long long power(long long a, long long b) {
	long long result = 1;
	while(b) {

        // odd
		if (b & 1)
        {
            result = result * a;
        }
		a = a * a;
		b >>= 1;

        cout<<result<<" "<<a<<" "<<b<<"\n";
	}
	return result;
}

int main() {
	cout<<power(2, 12)<<"\n";
	return 0;
}
