#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	string s1, s2;
	cin >> s1 >> s2;
	int max_length;
	if (s1.size() >= s2.size()) {
		max_length = s1.size();
	}
	else {
		max_length = s2.size();
	}
	string answer;
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());

	int carry = 0;

	for (int i = 0; i <= max_length; i++) {
		if (i <= s1.size()-1 && i <= s2.size()-1) {
			if ((carry + ((int)s1[i] - 48) + ((int)s2[i] - 48)) >= 10) {
				answer.append(to_string(carry + ((int)s1[i] - 48) + ((int)s2[i] - 48) - 10));
				carry = 1;
			}
			else {
				answer.append(to_string(carry + ((int)s1[i] - 48) + ((int)s2[i] - 48)));
				carry = 0;
			}
		}
		else if (i <= s1.size() - 1 && i > s2.size() - 1) {
			if ((carry + ((int)s1[i] - 48)) >= 10) {
				answer.append(to_string(carry + ((int)s1[i] - 48) - 10));
				carry = 1;
			}
			else {
				answer.append(to_string(carry + ((int)s1[i] - 48)));
				carry = 0;
			}
		}
		else if (i > s1.size() - 1 && i <= s2.size() - 1) {
			if ((carry + ((int)s2[i] - 48)) >= 10) {
				answer.append(to_string(carry + ((int)s2[i] - 48) - 10));
				carry = 1;
			}
			else {
				answer.append(to_string(carry + ((int)s2[i] - 48)));
				carry = 0;
			}
		}
		else {
			if (carry == 1) {
				answer.append("1");
			}
		}
	}

	reverse(answer.begin(), answer.end());
	cout << answer;
	return 0;
}