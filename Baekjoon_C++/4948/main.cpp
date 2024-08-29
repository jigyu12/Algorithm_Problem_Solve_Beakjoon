#include <iostream>
#include <cmath>

int main() {
	bool prime[123456 * 2 + 1];
	for (int i = 0; i < 123456 * 2 + 1; i++) {
		prime[i] = true;
	}
	prime[0] = false;
	prime[1] = false;
	for (int i = 2; i <= sqrt(123456 * 2); i++) {
		if (prime[i]) {
			for (int j = i + i; j < 123456 * 2 + 1; j += i) {
				prime[j] = false;
			}
		}
	}
	while (true) {
		int n;
		std::cin >> n;
		if (n == 0) {
			break;
		}
		int cnt = 0;
		for (int i = n + 1; i <= 2 * n; i++) {
			if (prime[i]) {
				cnt++;
			}
		}
		std::cout << cnt << "\n";
	}
	return 0;
}