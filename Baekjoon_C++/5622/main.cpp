#include <iostream>

using namespace std;

int main() {
	string s;
	cin >> s;
	int time = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s.at(i) >= 65 && s.at(i) <= 67) {
			time += 3;
		}
		else if (s.at(i) >= 68 && s.at(i) <= 70) {
			time += 4;
		}
		else if (s.at(i) >= 71 && s.at(i) <= 73) {
			time += 5;
		}
		else if (s.at(i) >= 74 && s.at(i) <= 76) {
			time += 6;
		}
		else if (s.at(i) >= 77 && s.at(i) <= 79) {
			time += 7;
		}
		else if (s.at(i) >= 80 && s.at(i) <= 83) {
			time += 8;
		}
		else if (s.at(i) >= 84 && s.at(i) <= 86) {
			time += 9;
		}
		else if (s.at(i) >= 87 && s.at(i) <= 90) {
			time += 10;
		}
	}
	cout << time;
	return 0;
}