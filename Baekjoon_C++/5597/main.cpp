#include <iostream>

using namespace std;

int main() {
	int stu[30];
	for (int i = 0; i < 30; i++) {
		stu[i] = 0;
	}
	for (int i = 0; i < 28; i++) {
		int a;
		cin >> a;
		stu[a-1] = 1;
	}
	for (int i = 0; i < 30; i++) {
		if (stu[i] != 1) {
			cout << i + 1 << endl;
		}
	}
	return 0;
}