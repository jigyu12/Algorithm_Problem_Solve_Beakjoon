#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if ((a == b) && (b == c)) {
		cout << 10000 + a * 1000;
	}
	else if ((a == b) || (a == c) || (b == c))  {
		if (a == b) {
			cout << 1000 + a * 100;
		}
		else if (a == c) {
			cout << 1000 + a * 100;
		}
		else {
			cout << 1000 + b * 100;
		}
	}
	else {
		int max = 0;
		if (max < a) {
			max = a;
		}
		if (max < b) {
			max = b;
		}
		if (max < c) {
			max = c;
		}
		cout << max * 100;
	}
	return 0;
}