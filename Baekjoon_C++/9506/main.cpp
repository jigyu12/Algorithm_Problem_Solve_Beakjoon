#include <iostream>
#include <cmath>
#include <list>

using namespace std;

int main() {
	while (true) {
		int n;
		cin >> n;
		if (n == -1) {
			break;
		}
		list<int> l;
		for (int i = 1; i <= sqrt(n); i++) {
			if (n % i == 0) {
				if (i == n / i) {
					l.push_back(i);
				}
				else {
					l.push_back(i);
					l.push_back(n/i);
				}
			}
		}
		l.sort();
		int sum = 0;
		list<int>::iterator iter;
		for (iter = l.begin(); iter != l.end(); iter++) {
			sum += *iter;
		}
		sum -= n;
		if (sum == n) {
			cout << n << " = ";
			int inx = 1;
			for (iter = l.begin(); iter != l.end(); iter++) {
				if (n != *iter && inx < l.size() - 1) {
					cout << *iter << " + ";
				}
				else if(n != *iter && inx == l.size() - 1){
					cout << *iter << endl;
				}
				inx++;
			}
		}
		else {
			cout << n << " is NOT perfect." << endl;
		}
	}
	return 0;
}