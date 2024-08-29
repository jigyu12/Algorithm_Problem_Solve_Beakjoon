#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(pair<pair<int, string>, int> a, pair<pair<int, string>, int> b);

int main() {
	int n;
	cin >> n;
	vector<pair<pair<int, string>, int>> members;
	int order = 1;
	for (int i = 0; i < n; i++) {
		int age;
		string name;
		cin >> age >> name;
		members.push_back(make_pair(make_pair(age, name), order));
		order++;
	}
	sort(members.begin(), members.end(), compare);
	for (int i = 0; i < n; i++) {
		cout << members[i].first.first << " " << members[i].first.second << "\n";
	}
	members.clear();
	members.shrink_to_fit();
	return 0;
}

bool compare(pair<pair<int, string>, int> a, pair<pair<int, string>, int> b) {
	if (a.first.first == b.first.first) {
		return a.second < b.second;
	}
	else {
		return a.first.first < b.first.first;
	}
}