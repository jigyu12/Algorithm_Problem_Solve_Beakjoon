#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	vector<pair<int, int>> coordinate;
	int n;
	cin >> n;
	coordinate.reserve(n);
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		coordinate.push_back(make_pair(x, y));
	}
	sort(coordinate.begin(), coordinate.end());

	for (int i = 0; i < n; i++) {
		cout << coordinate[i].first << " " << coordinate[i].second << "\n";
	}
	
	coordinate.clear();
	coordinate.shrink_to_fit();
	return 0;
}