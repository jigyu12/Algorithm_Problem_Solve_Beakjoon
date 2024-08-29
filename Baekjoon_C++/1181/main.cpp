#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(string s1, string s2);

int main() {
	int n;
	cin >> n;
	vector<string> words;
	int size = 0;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		vector<string>::iterator iter = find(words.begin(), words.end(), s);
		if (iter == words.end()) {
			words.push_back(s);
			size++;
		}
	}
	sort(words.begin(), words.end(), compare);
	for (int i = 0; i < size; i++) {
		cout << words[i] << "\n";
	}
	words.clear();
	words.shrink_to_fit();
	return 0;
}

bool compare(string s1, string s2) {
	if (s1.length() == s2.length()) {
		return s1 < s2;
	}
	else {
		return s1.length() < s2.length();
	}
}