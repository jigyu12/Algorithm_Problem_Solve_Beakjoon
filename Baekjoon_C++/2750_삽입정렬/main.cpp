#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int* numbers = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> numbers[i];
	}
	for (int i = 1; i < n; i++) {
		for (int j = i; j > 0; j--) {
			if (numbers[j] < numbers[j - 1]) {
				int temp = numbers[j];
				numbers[j] = numbers[j - 1];
				numbers[j - 1] = temp;
			}
			else {
				break;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << numbers[i] << endl;
	}
	delete[] numbers;
	return 0;
}