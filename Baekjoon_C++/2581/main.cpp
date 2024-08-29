#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int m, n;
	cin >> m >> n;
	int sum = 0;
	int p = -1;
	bool first = true;
	for (int i = m; i <= n; i++) {
		if (i != 1) {
			bool isPrime = true;
			for (int j = 2; j <= sqrt(i); j++) {
				if (i % j == 0) {
					isPrime = false;
					break;
				}
			}
			if (isPrime && first) {
				p = i;
				sum += i;
				first = false;
			}
			else if (isPrime && !first) {
				sum += i;
			}
		}
	}
	if (p == -1) {
		cout << p;
	}
	else {
		cout << sum << endl;
		cout << p << endl;
	}
	return 0;
}