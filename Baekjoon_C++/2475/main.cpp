#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int num[5];
	for (int i = 0; i < 5; i++)
	{
		std::cin >> num[i];
	}

	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += pow(num[i], 2);
	}

	std::cout << sum % 10;
}