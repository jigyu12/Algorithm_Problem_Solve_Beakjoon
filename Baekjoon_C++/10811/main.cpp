#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int* basket = new int[n];
	for (int i = 0; i < n; i++) {
		basket[i] = i+1;
	}
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a -= 1;
		b -= 1;
		reverse(basket + a, basket + b + 1);
	}
	for (int i = 0; i < n; i++) {
		cout << basket[i] << " ";
	}
	delete[] basket;
	return 0;
}