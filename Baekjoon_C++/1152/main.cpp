#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	getline(cin, s);
	int cnt = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s.at(i) == ' ') {
			cnt++;
		}
	}
	if (s.at(0) == ' ') {
		cnt--;
	}
	if (s.at(s.size() - 1) == ' ') {
		cnt--;
	}
	cout << cnt + 1;
	return 0;
}