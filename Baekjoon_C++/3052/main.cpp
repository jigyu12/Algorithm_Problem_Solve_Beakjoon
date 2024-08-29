#include <iostream>

using namespace std;

int main() {
	int remainder[42];
	for (int i = 0; i < 42; i++) {
		remainder[i] = 0;
	}
	for (int i = 0; i < 10; i++) {
		int a;
		cin >> a;
		remainder[a%42]++;
	}
	int cnt = 0;
	for (int i = 0; i < 42; i++) {
		if (remainder[i] > 0) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}