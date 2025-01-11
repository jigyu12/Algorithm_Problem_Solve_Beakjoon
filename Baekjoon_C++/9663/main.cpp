// Queen을 배치할 때, 배치하려는 행의 앞 행의 Queen들이 같은 열에 있는지, 대각선인지(x/y 기울기가 1)만 체크하면 된다.

#include <iostream>
#include <cmath>

int N;
int* queenPosition; // Queen의 포지션을 인덱스가 행의 값, 요소의 값을 열의 값으로 사용
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