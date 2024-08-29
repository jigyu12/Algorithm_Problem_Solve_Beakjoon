#include <iostream>
#include <set>
#include <algorithm>

int main() {
	int n, m;
	std::cin >> n >> m;
	std::set<int> a;
	std::set<int> b;
	std::set<int> result;
	for (int i = 0; i < n; i++) {
		int t;
		std::cin >> t;
		a.insert(t);
	}
	for (int i = 0; i < m; i++) {
		int t;
		std::cin >> t;
		b.insert(t);
	}
	std::set_symmetric_difference(a.begin(), a.end(), b.begin(), b.end(),std::inserter(result, result.begin()));
	std::cout << result.size();
	return 0;
}