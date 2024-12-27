#include <iostream>
#include <vector>

void RemoveStar(std::vector<std::vector<bool>>& stars, int size, int startY, int startX)
{
	if (size <= 1)
		return;

	int removeSize = size / 3;

	for (int i = startY + removeSize; i < startY + removeSize * 2; i++)
	{
		for (int j = startX + removeSize; j < startX + removeSize * 2; j++)
		{
			stars[i][j] = false;
		}
	}

	for (int i = startY; i < startY + removeSize * 3; i += removeSize)
	{
		for (int j = startX; j < startX + removeSize * 3; j += removeSize)
		{
			RemoveStar(stars, removeSize, i, j);
		}
	}
}

int main()
{
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int number;
	std::cin >> number;

	std::vector<std::vector<bool>> stars(number, std::vector<bool>(number, true));
	RemoveStar(stars, stars.size(), 0, 0);

	for (int i = 0; i < stars.size(); i++)
	{
		for (int j = 0; j < stars[i].size(); j++)
		{
			if (stars[i][j])
				std::cout << "*";
			else
				std::cout << " ";
		}
		std::cout << "\n";
	}
}