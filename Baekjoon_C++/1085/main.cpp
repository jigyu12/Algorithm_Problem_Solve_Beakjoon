#include <iostream>
#include <limits.h>

using namespace std;

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	int min = INT_MAX;
	if (x < min) {
		min = x;
	}
	if (w - x < min) {
		min = w - x;
	}
	if (y < min) {
		min = y;
	}
	if (h - y < min) {
		min = h - y;
	}
	cout << min;
	return 0;
}