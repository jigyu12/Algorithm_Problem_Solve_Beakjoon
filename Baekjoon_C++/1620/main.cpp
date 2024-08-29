#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	map<int, string> number;
	map<string, int> name;
	for (int i = 1; i <= n; i++) {
		string s;
		cin >> s;
		number.insert({ i, s });
		name.insert({ s, i });
	}
	for (int i = 0; i < m; i++) {
		string s;
		cin >> s;
		if (isdigit(s[0])) {
			cout << number[stoi(s)] << "\n";
		}
		else {
			cout << name[s] << "\n";
		}
	}
	return 0;
}