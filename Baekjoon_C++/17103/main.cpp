#include <iostream>
#include <cmath>

int main() {
	bool prime[1000000 + 1];
	for (int i = 0; i < 1000000 + 1; i++) {
		prime[i] = true;
	}
	prime[0] = false;
	prime[1] = false;
	for (int i = 2; i <= sqrt(1000000); i++) {
		if (prime[i]) {
			for (int j = i + i; j < 1000000 + 1; j += i) {
				prime[j] = false;
			}
		}
	}
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		int even;
		std::cin >> even;
		int cnt = 0;
		for (int j = 2; j <= even / 2; j++) {
			if (prime[j] && prime[even - j]) {
				cnt++;
			}
		}
		std::cout << cnt << "\n";
	}
	return 0;
}