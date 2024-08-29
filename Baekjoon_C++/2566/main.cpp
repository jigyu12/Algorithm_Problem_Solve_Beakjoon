#include <iostream>

using namespace std;

int main() {
	int arr[9][9];
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
		}
	}
	int max = -1;
	int inx_r = -1;
	int inx_c = -1;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
				inx_r = i + 1;
				inx_c = j + 1;
			}
		}
	}
	cout << max << endl;
	cout << inx_r << " " << inx_c << endl;
	return 0;
}