#include <iostream>
#include <set>

using namespace std;

int main() {
	int n;
	cin >> n;
	int m;
	cin >> m;
	set<string> words;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		words.insert(s);
	}
	int result = 0;
	for (int i = 0; i < m; i++) {
		string s;
		cin >> s;
		result += words.count(s);
	}
	cout << result;
	return 0;
}