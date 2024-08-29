#include <iostream>

using namespace std;

int main() {
	string s;
	cin >> s;
	int m = s.size() - 1;
	bool p = true;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != s[m]) {
			p = false;
			break;
		}
		m--;
	}
	if (p) {
		cout << 1;
	}
	else {
		cout << 0;
	}
	return 0;
}