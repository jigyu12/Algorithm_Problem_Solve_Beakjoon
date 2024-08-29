#include <iostream>

using namespace std;

int main() {
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	int ans_x;
	int ans_y;
	bool br = false;
	for (int x = -999; x <= 999; x++) {
		for (int y = -999; y <= 999; y++) {
			if (a * x + b * y == c) {
				if (d * x + e * y == f) {
					ans_x = x;
					ans_y = y;
					b = true;
					break;
				}
			}
		}
		if (br) {
			break;
		}
	}
	cout << ans_x << " " << ans_y;
	return 0;
}