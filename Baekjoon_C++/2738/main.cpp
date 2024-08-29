#include <iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int** array1 = new int*[n];
	for (int i = 0; i < n; i++) {
		array1[i] = new int[m];
	}

	int** array2 = new int*[n];
	for (int i = 0; i < n; i++) {
		array2[i] = new int[m];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> array1[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> array2[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << array1[i][j] + array2[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++) {
		delete[] array1[i];
	}
	delete[] array1;

	for (int i = 0; i < n; i++) {
		delete[] array2[i];
	}
	delete[] array2;

	return 0;
}