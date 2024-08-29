#include <iostream>

using namespace std;

void countingSort(int size);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	countingSort(n);
	return 0;
}

// 카운팅한 개수만큼 출력
void countingSort(int size) {
	int counting[10001];
	for (int i = 0; i < 10001; i++) {
		counting[i] = 0;
	}
	for (int i = 0; i < size; i++) {
		int n;
		cin >> n;
		counting[n]++;
	}
	for (int i = 0; i < 10001; i++) {
		for (int j = 0; j < counting[i]; j++) {
			cout << i << "\n";
		}
	}
}


// 누적 합으로 풀이 (메모리 초과)
/*
int* countingSort(int* array, int size);

int main() {
	int n;
	cin >> n;
	int* numbers = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> numbers[i];
	}
	int* result = countingSort(numbers, n);
	for (int i = 0; i < n; i++) {
		cout << result[i] << "\n";
	}
	delete[] numbers;
	delete[] result;
	return 0;
}

int* countingSort(int* array, int size) {
	int counting[10001];
	int* result = new int[size];
	for (int i = 0; i < 10001; i++) {
		counting[i] = 0;
	}
	for (int i = 0; i < size; i++) {
		counting[array[i]]++;
	}
	for (int i = 0; i < 10001 - 1; i++) {
		counting[i+1] += counting[i];
	}
	for (int i = size - 1; i >= 0; i--) {
		result[--counting[array[i]]] = array[i];
	}
	return result;
}
*/