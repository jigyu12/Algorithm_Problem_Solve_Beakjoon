#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b);

int main() {
	
	int n;
	cin >> n;
	vector<pair<int, int>> coordinate;
	coordinate.reserve(n);
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		coordinate.push_back(make_pair(x,y));
	}
	sort(coordinate.begin(), coordinate.end(), compare);
	for (int i = 0; i < n; i++) {
		cout << coordinate[i].first << " " << coordinate[i].second << "\n";
	}
	coordinate.clear();
	coordinate.shrink_to_fit();
	

	// x y의 순서를 바꾸는 방식
	/*
	int n;
	cin >> n;
	vector<pair<int, int>> coordinate;
	coordinate.reserve(n);
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		coordinate.push_back(make_pair(y, x));
	}
	sort(coordinate.begin(), coordinate.end());
	for (int i = 0; i < n; i++) {
		cout << coordinate[i].second << " " << coordinate[i].first << "\n";
	}
	coordinate.clear();
	coordinate.shrink_to_fit();
	*/
	return 0;
}

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	else {
		return a.second < b.second;
	}
}