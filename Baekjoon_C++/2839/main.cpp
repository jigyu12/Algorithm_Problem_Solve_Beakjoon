#include <iostream>
#include <climits>

using namespace std;

int main() {
	int n;
	cin >> n;
	int min = INT_MAX;
	if (n % 5 == 0) {
		if (min > n / 5) {
			min = n / 5;
		}
	}
	if (n % 3 == 0) {
		if (min > n / 3) {
			min = n / 3;
		}
	}
	int i = 1;
	int j = 0;
	while (true) {
		j = 0;
		if (5 * i > n) {
			break;
		}
		while (true) {
			if (5 * i + 3 * j == n) {
				if (min > i + j) {
					min = i + j;
				}
				break;
			}
			else if (5 * i + 3 * j > n) {
				break;
			}
			j++;
		}
		i++;
	}
	if (min == INT_MAX) {
		cout << -1;
	}
	else {
		cout << min;
	}
	return 0;
}