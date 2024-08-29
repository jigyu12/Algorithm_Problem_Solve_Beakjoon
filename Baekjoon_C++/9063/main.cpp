#include <iostream>
#include <climits> 

using namespace std;

int main() {
	int n;
	cin >> n;
	int x_max = INT_MIN;
	int y_max = INT_MIN;
	int x_min = INT_MAX;
	int y_min = INT_MAX;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		if (x > x_max) {
			x_max = x;
		}
		if (y > y_max) {
			y_max = y;
		}
		if (x < x_min) {
			x_min = x;
		}
		if (y < y_min) {
			y_min = y;
		}
	}
	cout << (x_max - x_min) *(y_max - y_min);
	return 0;
}