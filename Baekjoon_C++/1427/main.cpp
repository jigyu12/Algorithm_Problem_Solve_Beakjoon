#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	string s;
	cin >> s;
	int* num = new int[s.size()];
	for (int i = 0; i < s.size(); i++) {
		num[i] = s[i] - 48;
	}
	sort(num, num + s.size(), greater<>());
	for (int i = 0; i < s.size(); i++) {
		cout << num[i];
	}
	delete[] num;
	return 0;
}