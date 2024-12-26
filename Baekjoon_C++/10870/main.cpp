#include <iostream>

long long Fibonacci(long long number)
{
	if (number <= 0)
		return 0;

	if (number == 1)
		return 1;

	return Fibonacci(number - 1) + Fibonacci(number - 2);
}

int main()
{
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	long long number;
	std::cin >> number;

	std::cout << Fibonacci(number);
}