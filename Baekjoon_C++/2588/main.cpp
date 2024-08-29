#include <iostream>
#include <string>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	string s = to_string(b);
	for (int i = s.length() - 1; i >= 0; i--) {
		cout << a * (s[i] - 48) << endl;
	}
	cout << a * b << endl;
	return 0;
}