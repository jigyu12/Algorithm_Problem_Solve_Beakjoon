#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

void MakeCantorSet(std::vector<bool>& set, int left, int right)
{
	if (left >= right)
		return;

	int size = (right - left + 1) / 3;

	std::fill(set.begin() + left + size, set.begin() + right - size + 1, false);

	MakeCantorSet(set, left, left + size - 1);
	MakeCantorSet(set, left + size, right - size);
	MakeCantorSet(set, right - size + 1, right);
}

int main()
{
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int num;
	while (std::cin >> num)
	{
		std::vector<bool> set((int)std::pow(3, num), true);

		MakeCantorSet(set, 0, set.size() - 1);

		for (int i = 0; i < set.size(); i++)
		{
			if (set[i])
				std::cout << '-';
			else
				std::cout << ' ';
		}

		std::cout << "\n";
	}
}