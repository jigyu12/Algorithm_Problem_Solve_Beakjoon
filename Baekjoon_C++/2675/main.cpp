#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int re;
		string s;
		cin >> re >> s;
		for (int j = 0; j < s.size(); j++) {
			for (int k = 0; k < re; k++) {
				cout << s.at(j);
			}
		}
		cout << endl;
	}
	return 0;
}