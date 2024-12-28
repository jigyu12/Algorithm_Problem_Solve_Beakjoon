// https://mgyo.tistory.com/185#google_vignette >> �ϳ��� ž �˰��� ���� �� ������ �� ����Ʈ
// �ϳ��� ž�� �� �̵� Ƚ���� 2^n - 1 �̴�.

#include <iostream>
#include <cmath>
#include <string>
#include <vector>

void AddCountAndResult(int from, int to, int& callCount, std::vector<std::string>& result)
{
	callCount++;

	std::string s = "";
	s.append(std::to_string(from));
	s.append(" ");
	s.append(std::to_string(to));
	result.push_back(s);
}

void MoveHanoi(int towerSize, int from, int by, int to, int& callCount, std::vector<std::string>& result)
{
	if (towerSize <= 1)
	{
		AddCountAndResult(from, to, callCount, result);

		return;
	}

	MoveHanoi(towerSize - 1, from, to, by, callCount, result);

	AddCountAndResult(from, to, callCount, result);

	MoveHanoi(towerSize - 1, by, from, to, callCount, result);
}

int main()
{
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int num;
	std::cin >> num;

	int callCount = 0;
	std::vector<std::string> result;
	MoveHanoi(num, 1, 2, 3, callCount, result);
	
	std::cout << callCount << "\n";
	for (int i = 0; i < result.size(); i++)
	{
		std::cout << result[i] << "\n";
	}
}

//#include <iostream>
//#include <cmath>
//
//void MoveHanoi(int towerSize, int from, int by, int to)
//{
//	if (towerSize <= 1)
//	{
//		std::cout << from << " " << to << "\n";
//
//		return;
//	}
//
//	MoveHanoi(towerSize - 1, from, to, by);
//	std::cout << from << " " << to << "\n";
//	MoveHanoi(towerSize - 1, by, from, to);
//}
//
//int main()
//{
//	std::cin.tie(NULL);
//	std::cout.tie(NULL);
//	std::ios_base::sync_with_stdio(false);
//
//	int num;
//	std::cin >> num;
//
//	std::cout << (int)std::pow(2, num) - 1 << "\n";
//	MoveHanoi(num, 1, 2, 3);
//}