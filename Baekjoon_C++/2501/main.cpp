#include <iostream>
#include <cmath>
#include <list>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int cnt = 0;
	list<int> l;
	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			if (i == n / i) {
				l.push_back(i);
				cnt += 1;
			}
			else {
				l.push_back(i);
				l.push_back(n / i);
				cnt += 2;
			}
		}
	}
	l.sort();
	if (k <= cnt) {
		
		list<int>::iterator iter = l.begin();
		advance(iter, k-1);
		cout << *iter << " ";
		
		/*
		list<int>::iterator iter;
		int inx = 1;
		for (iter = l.begin(); iter != l.end(); iter++) {
			if (k == inx) {
				cout << *iter << " ";
				break;
			}
			inx++;
		}
		*/
	}
	else {
		cout << 0;
	}
	return 0;
}