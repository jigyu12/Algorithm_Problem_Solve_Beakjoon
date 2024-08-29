#include <iostream>
#include <limits.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int* number = new int[n];
	int min = INT_MAX;
	int max = INT_MIN;
	for (int i = 0; i < n; i++) {
		cin >> number[i];
	}
	for (int i = 0; i < n; i++) {
		if (number[i] < min) {
			min = number[i];
		}
		if (number[i] > max) {
			max = number[i];
		}
	}
	cout << min << " " << max;

	delete[] number;
	return 0;
}