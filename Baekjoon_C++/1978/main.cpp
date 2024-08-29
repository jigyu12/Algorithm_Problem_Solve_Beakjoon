#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n;
	cin >> n;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		if (num != 1) {
			bool prime = true;
			for (int j = 2; j <= sqrt(num); j++) {
				if (num % j == 0) {
					prime = false;
					break;
				}
			}
			if (prime) {
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}