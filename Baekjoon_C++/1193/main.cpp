#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int m = 1;
	int result = 0;
	int i = 1;
	int inx;
	while (true) {
		if (n < m) {
			break;
		}
		inx = n - m;
		m += i;
		i++;
		result++;
	}
	if (result % 2 == 0) {
		int one = 1;
		for (int k = 0; k < inx; k++) {
			one++;
			result--;
		}
		cout << one << "/" << result;
	}
	else {
		int one = 1;
		for (int k = 0; k < inx; k++) {
			one++;
			result--;
		}
		cout << result << "/" << one;
	}
	return 0;
}