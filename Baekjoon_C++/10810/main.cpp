#include <iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int* basket = new int[n];
	for (int i = 0; i < n; i++) {
		basket[i] = 0;
	}
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		a -= 1;
		b -= 1;
		for (int j = a; j <= b; j++) {
			basket[j] = c;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << basket[i] << " ";
	}
	delete[] basket;
	return 0;
}