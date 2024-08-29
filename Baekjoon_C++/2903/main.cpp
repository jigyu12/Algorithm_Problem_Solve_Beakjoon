#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n;
	cin >> n;
	int p = 2;
	for (int i = 0; i < n; i++) {
		p += (p - 1);
	}
	cout << (long long)pow(p, 2);
	return 0;
}