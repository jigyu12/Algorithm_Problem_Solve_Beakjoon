#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int c;
		cin >> c;

		int d = c / 25;
		cout << d << " ";
		c = c % 25;

		d = c / 10;
		cout << d << " ";
		c = c % 10;

		d = c / 5;
		cout << d << " ";
		c = c % 5;

		d = c / 1;
		cout << d << " ";

		cout << endl;
	}
	return 0;
}