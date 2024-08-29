#include <iostream>

using namespace std;

int main() {
	int alpha[26];
	for (int i = 0; i < 26; i++) {
		alpha[i] = 0;
	}
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] - 65 >= 0 && s[i] - 65 <= 25) {
			alpha[s[i] - 65]++;
		}
		else {
			alpha[s[i] - 97]++;
		}
	}
	int max = 0;
	int inx = -1;
	for (int i = 0; i < 26; i++) {
		if (alpha[i] > max) {
			max = alpha[i];
			inx = i;
		}
	}
	int cnt = 0;
	for (int i = 0; i < 26; i++) {
		if (alpha[i] == max) {
			cnt++;
		}
	}
	if (cnt > 1) {
		cout << "?";
	}
	else {
		cout << (char)(inx + 65);
	}
	return 0;
}