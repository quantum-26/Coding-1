#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n=146, p=5;


	int max_power = 0;
	int pk = p;
	while (pk <= n) {
		max_power += n/pk;
		pk *= p;
	}

	cout << max_power << endl;

	return 0;
}
