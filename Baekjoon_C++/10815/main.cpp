#include <iostream>
#include <set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	set<int> A;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		A.insert(temp);
	}
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		cout << A.count(temp) << " ";
	}
	return 0;
}