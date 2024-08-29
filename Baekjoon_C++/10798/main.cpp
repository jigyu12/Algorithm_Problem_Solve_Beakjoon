#include <iostream>

using namespace std;

int main() {
	string words[5];
	int max = 0;
	for (int i = 0; i < 5; i++) {
		cin >> words[i];
		if (words[i].size() > max) {
			max = words[i].size();
		}
	}
	for (int i = 0; i < max; i++) {
		if (words[0].size() > i) {
			cout << words[0][i];
		}
		if (words[1].size() > i) {
			cout << words[1][i];
		}
		if (words[2].size() > i) {
			cout << words[2][i];
		}
		if (words[3].size() > i) {
			cout << words[3][i];
		}
		if (words[4].size() > i) {
			cout << words[4][i];
		}
	}
	return 0;
}