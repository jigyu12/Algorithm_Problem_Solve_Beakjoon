// ���� ���̿� ���� ���ڰ� ���� ������ ���ں��� ũ���� ���� �Ѵ�.

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
		if (N < (M - 1 - depth) + i)   // ���� ���� ���ķδ� ���� ������ ���� �ɼ� ���� ������ ����ġ�� �ڵ带 �־�ô�.
			return;					   // ex) depth = 0, i = 2, N = 2, M = 2 �϶�

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