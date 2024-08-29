#include <iostream>
#include <limits.h>

using namespace std;

int main() {
	int number[9];
	for (int i = 0; i < 9; i++) {
		cin >> number[i];
	}
	int max = INT_MIN, inx;
	for (int i = 0; i < 9; i++) {
		if (number[i] > max) {
			max = number[i];
			inx = i + 1;
		}
	}
	cout << max << endl;
	cout << inx << endl;
	return 0;
}