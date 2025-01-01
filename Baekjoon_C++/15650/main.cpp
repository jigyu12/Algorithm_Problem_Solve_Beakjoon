// 다음 깊이에 나올 숫자가 이전 깊이의 숫자보다 크도록 구현 한다.

#include <iostream>

int N, M;
int* printArray;

void PrintCombination(int depth, int minValue)
{
	if (depth == M)
	{
		for (int i = 0; i < M; i++)
		{
			std::cout << printArray[i] << ' ';
		}
		std::cout << "\n";

		return;
	}

	for (int i = minValue; i <= N; i++)
	{
		if (N < (M - 1 - depth) + i)   // 일정 숫자 이후로는 절대 조합이 만족 될수 없기 때문에 가지치기 코드를 넣어봤다.
			return;					   // ex) depth = 0, i = 2, N = 2, M = 2 일때

		printArray[depth]= i;
		PrintCombination(depth + 1, i + 1);
	}
}

int main()
{
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	std::cin >> N >> M;

	printArray = new int[M];

	PrintCombination(0, 1);

	delete[] printArray;
}