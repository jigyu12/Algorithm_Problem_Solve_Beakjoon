#include <iostream>

using namespace std;

int main() {
	int total, n;
	cin >> total >> n;
	int result = 0;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		result += a * b;
	}
	if (total == result) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	return 0;
}