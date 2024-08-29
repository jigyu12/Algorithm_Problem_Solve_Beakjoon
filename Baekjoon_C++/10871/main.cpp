#include <iostream>

using namespace std;

int main() {
	int n, x;
	cin >> n >> x;
	int* number = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> number[i];
	}
	for (int i = 0; i < n; i++) {
		if(number[i] < x) {
			cout << number[i] << " ";
		}
	}
	delete[] number;
	return 0;
}