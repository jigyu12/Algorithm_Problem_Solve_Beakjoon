#include <iostream>

int N, M;
int* printArray;

void PrintAllCombination(int depth, int minValue)
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
		printArray[depth] = i;
		PrintAllCombination(depth + 1, i);
	}
}

int main()
{
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	std::cin >> N >> M;
	
	printArray = new int[M];

	PrintAllCombination(0, 1);

	delete[] printArray;
}