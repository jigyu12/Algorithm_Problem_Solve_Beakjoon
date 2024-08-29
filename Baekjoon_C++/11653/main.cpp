#include <iostream>
#include <cmath>
#include <list>

using namespace std;

int main() {
	int n;
	cin >> n;
	if (n != 1) {
		list<int> divisor;
		for (int i = 1; i <= sqrt(n); i++) {
			if (n % i == 0) {
				if (i == 1) {
					divisor.push_back(n);
				}
				else if (i == n / i) {
					divisor.push_back(i);
				}
				else {
					divisor.push_back(i);
					divisor.push_back(n/i);
				}
			}
		}
		divisor.sort();
		list<int> prime;
		list<int>::iterator iter;
		for (iter = divisor.begin(); iter != divisor.end(); iter++) {
			bool isPrime = true;
			for (int j = 2; j <= sqrt(*iter); j++) {
				if (*iter % j == 0) {
					isPrime = false;
					break;
				}
			}
			if (isPrime) {
				prime.push_back(*iter);
			}
		}
		for (iter = prime.begin(); iter != prime.end(); iter++) {
			while (true) {
				if (n % *iter == 0) {
					n /= *iter;
					cout << *iter << endl;
				}
				else {
					break;
				}
			}
		}
	}
	return 0;
}