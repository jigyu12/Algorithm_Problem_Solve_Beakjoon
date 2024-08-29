#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string n1, n2;
	cin >> n1 >> n2;
	reverse(n1.begin(), n1.end());
	reverse(n2.begin(), n2.end());
	int num1 = stoi(n1), num2 = stoi(n2);
	if (num1 > num2) {
		cout << num1;
	}
	else {
		cout << num2;
	}
	return 0;
}