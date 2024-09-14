#include <iostream>

int factorial(int num);

int main()
{
	int n, k;
	std::cin >> n >> k;
	std::cout << (factorial(n))/(factorial(n-k)*factorial(k));
}

int factorial(int num)
{
	int res = 1;
	for (int i = num; i >= 2; i--)
	{
		res *= i;
	}
	return res;
}