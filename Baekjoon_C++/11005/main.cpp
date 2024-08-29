#include <iostream>
#include <list>

using namespace std;

int main() {
	int a;
	cin >> a;
	int b;
	cin >> b;
	list<int> result;
	while (a > 0) {
		int mod = a % b;
		result.push_front(mod);
		a -= mod;
		a /= b;
	}
	list<int>::iterator iter = result.begin();
	for (iter = result.begin(); iter != result.end(); iter++)
	{
		if(*iter >= 0 && *iter <= 9) {
			cout << *iter;
		}
		else {
			cout << (char)(*iter+55);
		}
	}
	return 0;
}