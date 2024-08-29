
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
	set<string> hear;
	set<string> see;
	set<string> hear_see;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		hear.insert(s);
	}
	for (int i = 0; i < m; i++) {
		string s;
		cin >> s;
		see.insert(s);
	}

	set_intersection(hear.begin(), hear.end(), see.begin(), see.end(), inserter(hear_see, hear_see.begin()));

	cout << hear_see.size() << "\n";
	for (auto iter = hear_see.begin(); iter != hear_see.end(); iter++) {
		cout << *iter << "\n";
	}
	return 0;
}

// 벡터의 교집합
/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<string> hear;
	vector<string> see;
	int n, m;
	cin >> n >> m;
	vector<string> hear_see(n + m);
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		hear.push_back(s);
	}
	for (int i = 0; i < m; i++) {
		string s;
		cin >> s;
		see.push_back(s);
	}
	sort(hear.begin(), hear.end());
	sort(see.begin(), see.end());
	vector<string>::iterator it = set_intersection(hear.begin(), hear.end(), see.begin(), see.end(), hear_see.begin());
	hear_see.resize(it - hear_see.begin());

	cout << hear_see.size() << "\n";
	for (vector<string>::iterator iter = hear_see.begin(); iter != hear_see.end(); iter++) {
		cout << *iter << "\n";
	}
	return 0;
}
*/