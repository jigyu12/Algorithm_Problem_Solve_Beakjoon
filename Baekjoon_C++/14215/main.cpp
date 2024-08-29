#include <iostream>
#include <list>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
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
		cout << a + b + c;
	}
	else {
		(*iter) = sum - 1;
		list<int>::iterator iter2;
		int sum2 = 0;
		for (iter2 = edge.begin(); iter2 != edge.end(); iter2++) {
			sum2 += *iter2;
		}
		cout << sum2;
	}
	return 0;
}