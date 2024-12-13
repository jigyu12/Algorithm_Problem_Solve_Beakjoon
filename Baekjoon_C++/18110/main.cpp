// 항상 0 같은 특수 값 조심

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main()
{
	int difficultyNum;

	std::cin >> difficultyNum;

	if (difficultyNum == 0)
	{
		std::cout << 0 << std::endl;
	}
	else
	{
		std::vector<int> difficultyList;

		for (int i = 0; i < difficultyNum; i++)
		{
			int difficulty;

			std::cin >> difficulty;

			difficultyList.push_back(difficulty);
		}

		std::sort(difficultyList.begin(), difficultyList.end());

		int totalSum = 0;
		int totalNum = 0;
		int notIncludePeopleNum = std::round(difficultyNum * 0.15f);
		for (int i = 0; i < difficultyNum; i++)
		{
			if (i < notIncludePeopleNum || i >= difficultyNum - notIncludePeopleNum)
				continue;

			totalSum += difficultyList[i];
			totalNum++;
		}

		std::cout << std::round((float)totalSum / (float)totalNum) << std::endl;
	}
}