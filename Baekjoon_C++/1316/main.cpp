#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int r = 0;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		bool alpha[26];
		for (int j = 0; j < 26; j++) {
			alpha[j] = false;
		}
		bool group = true;
		for (int j = 0; j < s.size()-1; j++) {
			if (alpha[s[j] - 97] == false) {
				alpha[s[j] - 97] = true;
			}
			if (((s[j] - 97) != (s[j + 1] - 97)) && (alpha[s[j + 1] - 97] == true)) {
				group = false;
				break;
			}
		}
		if (group) {
			r++;
		}
	}
	cout << r;
	return 0;
}