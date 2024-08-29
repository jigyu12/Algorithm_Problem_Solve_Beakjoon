#include <iostream>

using namespace std;

int main() {
	string s;
	cin >> s;
	int cnt = 0;
	for (int i = 0; i < s.size(); i++) {
		if (i <= s.size() - 2 && s[i] == 'c' && (s[i + 1] == '=' || s[i + 1] == '-')) {
			cnt++;
			i++;
		}
		else if (i <= s.size() - 3 && s[i] == 'd' && s[i + 1] == 'z' && s[i + 2] == '=') {
			cnt++;
			i += 2;
		}
		else if (i <= s.size() - 2 && s[i] == 'd' && s[i + 1] == '-') {
			cnt++;
			i++;
		}
		else if (i <= s.size() - 2 && s[i] == 'l' && s[i + 1] == 'j') {
			cnt++;
			i++;
		}
		else if (i <= s.size() - 2 && s[i] == 'n' && s[i + 1] == 'j') {
			cnt++;
			i++;
		}
		else if (i <= s.size() - 2 && s[i] == 's' && s[i + 1] == '=') {
			cnt++;
			i++;
		}
		else if (i <= s.size() - 2 && s[i] == 'z' && s[i + 1] == '=') {
			cnt++;
			i++;
		}
		else {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}