#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void quickSort(int* array, int start, int end);

int main() {
	int n;
	cin >> n;
	int* numbers = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> numbers[i];
	}
	
	// �������� �־��� �ð����⵵ ������ ���� ó���� �迭�� �ѹ� �������� ���´�.(���� ����Ǯ�̿�)
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		int r = rand() % n;
		int temp = numbers[r];
		numbers[r] = numbers[i];
		numbers[i] = temp;
	}
	
	quickSort(numbers, 0, n - 1);
	for (int i = 0; i < n; i++) {
		cout << numbers[i] << "\n";
	}
	delete[] numbers;
	return 0;
}

void quickSort(int* array, int start, int end) {
	if (start >= end) {
		return;
	}
	int pivot = array[(start + end) / 2];
	int left = start;
	int right = end;
	while (true) {
		while (array[left] < pivot) {
			left++;
		}
		while (array[right] > pivot) {
			right--;
		}
		if (left < right) {
			int temp = array[left];
			array[left] = array[right];
			array[right] = temp;
		}
		else {
			break;
		}
	}
	quickSort(array, start, right);
	quickSort(array, right + 1, end);
	return;
}