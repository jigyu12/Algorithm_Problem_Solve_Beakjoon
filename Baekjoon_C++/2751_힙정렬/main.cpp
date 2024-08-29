#include <iostream>

using namespace std;

// 왼쪽 자식 노드 인덱스 = 부모 노드 인덱스 × 2 + 1, 오른쪽 자식 노드 인덱스 = 부모 노드 인덱스 × 2 + 2, 부모 노드 인덱스 = (자식 노드 인덱스 - 1) / 2

void heapSort(int* array, int size);
void heapify(int* array, int start_index, int last_index);

int main() {
	int n;
	cin >> n;
	int* numbers = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> numbers[i];
	}
	heapSort(numbers, n);
	for (int i = 0; i < n; i++) {
		cout << numbers[i] << "\n";
	}
	delete[] numbers;
	return 0;
}

void heapSort(int* array, int size) {
	for (int i = (((size - 1) - 1) / 2); i >= 0; i--) {
		heapify(array, i, size - 1);
	}
	int t1 = array[0];
	array[0] = array[size - 1];
	array[size - 1] = t1;

	for (int i = size - 2; i > 0; i--) {
		heapify(array, 0, i);
		int t2 = array[0];
		array[0] = array[i];
		array[i] = t2;
	}
}

void heapify(int* array, int start_index, int last_index) {
	int current_index = start_index;
	int left_index = current_index * 2 + 1;
	int right_index = current_index * 2 + 2;
	if (right_index <= last_index && array[right_index] > array[current_index]) {
		current_index = right_index;
	}
	if (left_index <= last_index && array[left_index] > array[current_index]){
		current_index = left_index;
	}

	if (current_index != start_index) {
		int temp = array[start_index];
		array[start_index] = array[current_index];
		array[current_index] = temp;
		heapify(array, current_index, last_index);
	}
}