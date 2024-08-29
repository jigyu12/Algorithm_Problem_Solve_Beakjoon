#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a = n - 1, b = 1, c = 2 * n - 1 - 2, d = 1;
	for (int i = 0; i < n; i++) {
		for (int i = 0; i < a; i++) {
			cout << " ";
		}
		for (int i = 0; i < b; i++) {
			cout << "*";
		}
		a -= 1;
		b += 2;
		cout << endl;
	}
	for (int i = 0; i < n-1; i++) {
		for (int i = 0; i < d; i++) {
			cout << " ";
		}
		for (int i = 0; i < c; i++) {
			cout << "*";
		}
		d += 1;
		c -= 2;
		cout << endl;
	}
	return 0;
}