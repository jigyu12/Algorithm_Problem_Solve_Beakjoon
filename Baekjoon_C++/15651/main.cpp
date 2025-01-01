#include <iostream>

int N, M;
int* printArray;

void PrintAllPermutation(int depth)
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

	for (int i = 1; i <= N; i++)
	{
		printArray[depth] = i;
		PrintAllPermutation(depth + 1);
	}
}

int main()
{
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	std::cin >> N >> M;

	printArray = new int[M];

	PrintAllPermutation(0);

	delete[] printArray;
}