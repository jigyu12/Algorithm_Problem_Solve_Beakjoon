#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int* num = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	sort(num, num + n);
	list<int> result;
	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				if (num[i] + num[j] + num[k] <= m) {
					result.push_back(num[i] + num[j] + num[k]);
				}
			}
		}
	}
	result.sort();
	cout << result.back();
	delete[] num;
	return 0;
}