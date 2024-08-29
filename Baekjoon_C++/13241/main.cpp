#include <iostream>

long long euclidean(long long a, long long b);

int main() {
	long long a, b;
	std::cin >> a >> b;
	if (a >= b) {
		long long greatest_common_divisor = euclidean(a, b);
		std::cout << greatest_common_divisor * (a / greatest_common_divisor) * (b / greatest_common_divisor);
	}
	else {
		long long greatest_common_divisor = euclidean(b, a);
		std::cout << greatest_common_divisor * (a / greatest_common_divisor) * (b / greatest_common_divisor);
	}
	return 0;
}

long long euclidean(long long a, long long b) {
	long long c = a % b;
	if (c == 0) {
		return b;
	}
	return euclidean(b, c);
}