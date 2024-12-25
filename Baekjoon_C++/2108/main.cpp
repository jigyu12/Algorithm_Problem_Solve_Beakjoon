#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>

bool cmp(const std::pair<int, int>& a, const std::pair<int, int>& b)
{
	if (a.second == b.second)
		return a.first < b.first;
	else
		return a.second > b.second;
}

int main()
{
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int numCount;
	std::cin >> numCount;

	std::vector<int> numbers(numCount);
	for (int i = 0; i < numCount; i++)
	{
		std::cin >> numbers[i];
	}
	std::sort(numbers.begin(), numbers.end());

	int sum = 0;
	for (int i = 0; i < numCount; i++)
	{
		sum += numbers[i];
	}
	std::cout << std::round((double)sum / numCount) + 0.0 << "\n"; // -0 회피용 0.0 더하기
																   // std::round(x * 100) / 100 >> 소수 자릿수대로 출력하는 법(두 자리)
	std::cout << numbers[numCount / 2] << "\n";

	std::map<int, int> modeMap;
	int maxModeCount = 0;
	for (int i = 0; i < numCount; i++)
	{
		if (modeMap.find(numbers[i]) == modeMap.end())
		{
			modeMap.insert({ numbers[i] , 1 });
		}
		else
		{
			modeMap[numbers[i]]++;
		}
	}
	std::vector<std::pair<int, int>> modeVec;
	for (auto m : modeMap)
	{
		modeVec.push_back(m);
	}
	std::sort(modeVec.begin(), modeVec.end(), cmp);
	if (modeVec.size() == 1)
		std::cout << modeVec[0].first << "\n";
	else
	{
		if (modeVec[0].second != modeVec[1].second)
			std::cout << modeVec[0].first << "\n";
		else
			std::cout << modeVec[1].first << "\n";
	}

	std::cout << numbers[numCount - 1] - numbers[0] << "\n";
}