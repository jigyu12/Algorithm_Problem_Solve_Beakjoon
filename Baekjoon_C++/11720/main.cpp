#include <iostream>

using namespace std;

int main() {
	int n;
	string s;
	cin >> n >> s;
	int result = 0;
	for (int i = 0; i < n; i++) {
		result += s.at(i) - '0';
	}
	cout << result;
	return 0;
}