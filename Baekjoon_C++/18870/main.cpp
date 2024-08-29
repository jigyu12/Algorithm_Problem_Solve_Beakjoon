#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> numbers;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		numbers.push_back(t);
	}
	vector<int> sorted(numbers);
	sort(sorted.begin(), sorted.end());
	sorted.erase(unique(sorted.begin(), sorted.end()), sorted.end());
	for (int i = 0; i < n; i++) {
		cout << lower_bound(sorted.begin(), sorted.end(), numbers[i]) - sorted.begin() << " ";
	}
	return 0;
}