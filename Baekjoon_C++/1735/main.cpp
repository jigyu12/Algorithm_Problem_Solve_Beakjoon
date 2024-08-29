#include <iostream>

int euclidean(int a, int b);

int main() {
	int numerator1, denominator1, numerator2, denominator2;
	std::cin >> numerator1 >> denominator1 >> numerator2 >> denominator2;
	int numerator, denominator;
	numerator = (numerator1 * denominator2) + (numerator2 * denominator1);
	denominator = denominator1 * denominator2;
	int greatest_common_divisor;
	if (numerator >= denominator) {
		greatest_common_divisor = euclidean(numerator, denominator);
	}
	else {
		greatest_common_divisor = euclidean(denominator, numerator);
	}
	std::cout << (numerator / greatest_common_divisor) << " " << (denominator / greatest_common_divisor);
	return 0;
}

int euclidean(int a, int b) {
	int c = a % b;
	if (c == 0) {
		return b;
	}
	return euclidean(b, c);
}