#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int* number = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> number[i];
	}
	int cnt = 0;
	int num;
	cin >> num;
	for (int i = 0; i < n; i++) {
		if (number[i] == num) {
			cnt++;
		}
	}
	cout << cnt;
	delete[] number;
	return 0;
}