#include <iostream>

using namespace std;

int main() {
	int a1, a0, c, n0;
	cin >> a1 >> a0 >> c >> n0;
	if (a1 > c) {
		cout << 0;
	}
	else if (a1 == c) {
		if (a0 <= 0) {
			cout << 1;
		}
		else {
			cout << 0;
		}
	}
	else {
		double ans = (double)a0 / (double)(c - a1);
		if (ans <= n0) {
			cout << 1;
		}
		else {
			cout << 0;
		}
	}
	return 0;
}