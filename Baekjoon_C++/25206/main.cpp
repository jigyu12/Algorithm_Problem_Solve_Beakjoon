#include <iostream>

using namespace std;

int main() {
	double score = 0;
	double sub = 0;
	for (int i = 0; i < 20; i++) {
		string s1, s2;
		double s;
		cin >> s1 >> s >> s2;
		if (s2 == "A+") {
			score += (4.5 * s);
			sub += s;
		}
		else if (s2 == "A0") {
			score += (4.0 * s);
			sub += s;
		}
		else if (s2 == "B+") {
			score += (3.5 * s);
			sub += s;
		}
		else if (s2 == "B0") {
			score += (3.0 * s);
			sub += s;
		}
		else if (s2 == "C+") {
			score += (2.5 * s);
			sub += s;
		}
		else if (s2 == "C0") {
			score += (2.0 * s);
			sub += s;
		}
		else if (s2 == "D+") {
			score += (1.5 * s);
			sub += s;
		}
		else if (s2 == "D0") {
			score += (1.0 * s);
			sub += s;
		}
		else if (s2 == "F") {
			score += (0.0 * s);
			sub += s;
		}
	}
	cout << score / sub;
	return 0;
}