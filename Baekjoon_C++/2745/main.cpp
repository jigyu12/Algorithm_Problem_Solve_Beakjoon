#include <iostream>
#include <cmath>

using namespace std;

int main() {
	string s;
	cin >> s;
	int a;
	cin >> a;
	int result = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= '0' && s[i] <= '9') {
			result += (s[i] - 48) * pow(a, s.size() - 1 - i);
		}
		else {
			result += (s[i] - 55) * pow(a, s.size() - 1 - i);
		}
	}
	cout << result;
	return 0;
}