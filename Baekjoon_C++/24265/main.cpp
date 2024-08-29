#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	long long cnt = 0;
	for (int i = 1; i <= n - 1; i++) {
		cnt += n - (i + 1) + 1;
	}
	cout << cnt << endl;
	cout << 2;
	return 0;
}