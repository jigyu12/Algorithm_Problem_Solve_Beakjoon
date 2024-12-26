#include <iostream>

long long Factorial(long long number)
{
	if (number <= 1)
		return 1;

	return number * Factorial(number - 1);
}

int main()
{
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	long long num;
	std::cin >> num;

	std::cout << Factorial(num);
}