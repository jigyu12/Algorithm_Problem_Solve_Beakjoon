#include <iostream>

int euclidean(int a, int b);

int main() {
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		std::cin >> a >> b;
		int greatest_common_divisor;
		if (a >= b) {
			greatest_common_divisor = euclidean(a, b);
		}
		else {
			greatest_common_divisor = euclidean(b, a);
		}
		std::cout << greatest_common_divisor * (a / greatest_common_divisor) * (b / greatest_common_divisor) << "\n";
	}
	return 0;
}

int euclidean(int a, int b) {
	int c = a % b;
	if (c == 0) {
		return b;
	}
	return euclidean(b, c);
}