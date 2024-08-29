#include <iostream>

using namespace std;

void mergeSort(int* array, int start, int end);

int main() {
	int n;
	cin >> n;
	int* numbers = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> numbers[i];
	}
	mergeSort(numbers, 0, n - 1);
	for (int i = 0; i < n; i++) {
		cout << numbers[i] << "\n";
	}
	delete[] numbers;
	return 0;
}

void mergeSort(int* array, int start, int end) {
	if (end - start == 0) {
		return;
	}
	int mid = (start + end) / 2;
	mergeSort(array, start, mid);
	mergeSort(array, mid+1, end);
	int* temp = new int[end - start + 1];
	int left = start;
	int right = mid + 1;
	int inx = 0;
	while (true) {
		if (left > mid && right > end) {
			break;
		}
		else if (left <= mid && right > end) {
			temp[inx] = array[left];
			left++;
			inx++;
		}
		else if (left > mid && right <= end) {
			temp[inx] = array[right];
			right++;
			inx++;
		}
		else {
			if (array[left] < array[right]) {
				temp[inx] = array[left];
				left++;
				inx++;
			}
			else {
				temp[inx] = array[right];
				right++;
				inx++;
			}
		}
	}
	for (int i = start; i <= end; i++) {
		array[i] = temp[i - start];
	}
	delete[] temp;
	return;
}