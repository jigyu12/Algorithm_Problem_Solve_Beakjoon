#include <iostream>

using namespace std;

int main() {
	char s[1001]; // \0 �ڸ� + 1
	cin >> s;
	int i;
	cin >> i;
	cout << s[i-1];
	return 0;
}