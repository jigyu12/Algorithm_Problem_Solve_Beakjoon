#include <iostream>
#include <list>

using namespace std;

int main() {
	while (true) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) {
			break;
		}
		list<int> edge;
		edge.push_back(a);
		edge.push_back(b);
		edge.push_back(c);
		edge.sort();
		list<int>::iterator iter = edge.begin();
		int sum = 0;
		sum += *iter;
		iter++;
		sum += *iter;
		iter++;
		if (*iter < sum) {
			if (a == b && b == c) {
				cout << "Equilateral" << endl;
			}
			else if (a == b || b == c || a == c) {
				cout << "Isosceles" << endl;
			}
			else {
				cout << "Scalene" << endl;
			}
		}
		else {
			cout << "Invalid" << endl;
		}
	}
	return 0;
}