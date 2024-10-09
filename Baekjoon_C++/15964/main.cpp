#include <iostream>

using namespace std;

long long AtOperator(long long, long long);

int main()
{
	long long a, b;
	cin >> a >> b;

	cout << AtOperator(a, b);

	return 0;
}

long long AtOperator(long long operand1, long long operand2)
{
	long long result;

	result = (operand1 + operand2) * (operand1 - operand2);

	return result;
}