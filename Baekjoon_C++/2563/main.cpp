#include <iostream>

using namespace std;

int main() {
	int paper[100][100];
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			paper[i][j] = 0;
		}
	}

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		for (int q = x; q < x + 10; q++) {
			for (int w = y; w < y + 10; w++) {
				paper[q][w]++;
			}
		}
	}

	int ans = 0;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (paper[i][j] > 0) {
				ans++;
			}
		}
	}
	cout << ans;
	return 0;
}