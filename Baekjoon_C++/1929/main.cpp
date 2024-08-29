
// 에라토스테네스의 체 방식
#include <iostream>
#include <cmath>

int main() {
	int n, m;
	std::cin >> n >> m;
	bool prime[1000001];
	for (int i = 0; i < 1000001; i++) {
		prime[i] = true;
	}
	prime[0] = false;
	prime[1] = false;
	for (int i = 2; i <= sqrt(1000000); i++) {
		if (prime[i]) {
			for (int j = i + i; j < 1000001; j += i) {
				prime[j] = false;
			}
		}
	}
	for (int i = n; i <= m; i++) {
		if (prime[i]) {
			std::cout << i << "\n";
		}
	}
	return 0;
}

// 소수 판별 방식
/*
#include <iostream>
#include <cmath>

bool isPrime(int number);

int main() {
	int n, m;
	std::cin >> n >> m;
	for (int i = n; i <= m; i++) {
		if (isPrime(i) && i != 1) {
			std::cout << i << "\n";
		}
	}
	return 0;
}

bool isPrime(int number) {
	bool prime = true;
	for (int i = 2; i <= sqrt(number); i++) {
		if (number % i == 0) {
			prime = false;
			break;
		}
	}
	return prime;
}
*/