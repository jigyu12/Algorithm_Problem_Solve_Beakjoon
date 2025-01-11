// Queen�� ��ġ�� ��, ��ġ�Ϸ��� ���� �� ���� Queen���� ���� ���� �ִ���, �밢������(x/y ���Ⱑ 1)�� üũ�ϸ� �ȴ�.

#include <iostream>
#include <cmath>

int N;
int* queenPosition; // Queen�� �������� �ε����� ���� ��, ����� ���� ���� ������ ���
int resultCount;

bool CanPlaceQueen(int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		if (queenPosition[i] == col || abs(i - row) == abs(queenPosition[i] - col))
			return false;
	}

	return true;
}

void CountNQueenResult(int depth)
{
	if (depth == N)
	{
		++resultCount;

		return;
	}

	for (int i = 0; i < N; i++)
	{
		if (CanPlaceQueen(depth, i))
		{
			queenPosition[depth] = i;

			CountNQueenResult(depth + 1);
		}
	}
}

int main()
{
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	std::cin >> N;

	queenPosition = new int[N];

	resultCount = 0;

	CountNQueenResult(0);

	std::cout << resultCount;

	delete[] queenPosition;
}