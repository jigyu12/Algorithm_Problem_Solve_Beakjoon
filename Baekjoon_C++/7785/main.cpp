#include <iostream>
#include <set>

using namespace std;

int main() {
	int n;
	cin >> n;
	set<string, greater<string>> list;
	for (int i = 0; i < n; i++) {
		string name, e_l;
		cin >> name >> e_l;
		if (e_l == "enter") {
			list.insert(name);
		}
		else {
			list.erase(name);
		}
	}
	for (auto iter = list.begin(); iter != list.end(); iter++) {
		cout << *iter << "\n";
	}
	return 0;
}