#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	if (n == 0 || n == 1)
	{
		std::cout << 1;
	}
	else
	{
		long result = 1;
		for (long i = n; i >= 1; i--)
		{
			result *= i;
		}
		std::cout << result;
	}
}