#include <iostream>
#include <cmath>

bool isPrime(long long number);

int main() {
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		long long number;
		std::cin >> number;
		while (true) {
			if (isPrime(number) && number != 0 && number != 1) {
				break;
			}
			number++;
		}
		std::cout << number << "\n";
	}
	return 0;
}

bool isPrime(long long number) {
	bool prime = true;
	for (int i = 2; i <= std::sqrt(number); i++) {
		if (number % i == 0) {
			prime = false;
			break;
		}
	}
	return prime;
}