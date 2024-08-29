#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int m = 1;
	int result = 1;
	int i = 1;
	while (true) {
		if (n <= m) {
			break;
		}
		m += 6 * i;
		i++;
		result++;
	}
	cout << result;
	return 0;
}