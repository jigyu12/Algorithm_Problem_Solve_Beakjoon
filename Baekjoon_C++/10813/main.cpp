#include <iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int* basket = new int[n];
	for (int i = 0; i < n; i++) {
		basket[i] = i + 1;
	}
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a -= 1;
		b -= 1;
		int temp;
		temp = basket[a];
		basket[a] = basket[b];
		basket[b] = temp;
	}
	for (int i = 0; i < n; i++) {
		cout << basket[i] << " ";
	}
	delete[] basket;
	return 0;
}