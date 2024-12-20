#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int numCount;
	std::cin >> numCount;

	std::vector<int> numbers(numCount);
	for (int i = 0; i < numbers.size(); i++)
	{
		std::cin >> numbers[i];
	}

	std::sort(numbers.begin(), numbers.end());
	
	std::cout << numbers[0] * numbers[numbers.size() - 1];
}