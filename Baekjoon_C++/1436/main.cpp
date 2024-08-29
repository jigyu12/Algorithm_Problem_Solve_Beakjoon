#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;
	int cnt = 1;
	int name = 666;
	while (true) {
		string nm = to_string(name);
		bool isName = false;
		for (int i = 0; i < nm.size()-2; i++) {
			if (nm[i] == '6' && nm[i + 1] == '6' && nm[i + 2] == '6') {
				if (cnt == n) {
					isName = true;
					break;
				}
				else {
					cnt++;
					break;
				}
			}
		}
		if (isName) {
			cout << name;
			break;
		}
		name++;
	}
	return 0;
}