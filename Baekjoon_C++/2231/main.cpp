#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;
	bool notConstructor = true;
	for (int i = 1; i <= n; i++) {
		string num = to_string(i);
		int sum = 0;
		for (int j = 0; j < num.size(); j++) {
			sum += num[j] - 48;
		}
		sum += i;
		if (n == sum) {
			cout << i;
			notConstructor = false;
			break;
		}
	}
	if (notConstructor) {
		cout << 0;
	}
	return 0;
}