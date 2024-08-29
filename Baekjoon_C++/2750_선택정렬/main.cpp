#include <iostream>
#include <climits>

using namespace std;

int main() {
	int n;
	cin >> n;
	int* numbers = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> numbers[i];
	}
	for (int i = 0; i < n; i++) {
		int inx;
		int min = INT_MAX;
		for (int j = i; j < n; j++) {
			if (min > numbers[j]) {
				min = numbers[j];
				inx = j;
			}
		}
		int temp = numbers[i];
		numbers[i] = numbers[inx];
		numbers[inx] = temp;
	}
	for (int i = 0; i < n; i++) {
		cout << numbers[i] << endl;
	}
	delete[] numbers;
	return 0;
}