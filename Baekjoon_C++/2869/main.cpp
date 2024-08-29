#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int a, b, v;
	cin >> a >> b >> v;
	int day = 1;
	double remain = v - a;
	day += ceil(remain / (a - b));
	cout << day;
	return 0;
}