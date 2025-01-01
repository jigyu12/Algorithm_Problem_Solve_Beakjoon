// dfs를 응용한 백트래킹으로 문제를 해결한다.
// dfs >> stack이나 재귀함수로 구현
// https://better-tomorrow.tistory.com/entry/DFS-BFS-%EC%9D%B4%ED%95%B4%ED%95%98%EA%B8%B0
// https://doing-nothing.tistory.com/48 >> 설명이 잘 나와있는 블로그

#include <iostream>

int N, M;
int* printArray;
bool* isVisited;

void PrintPermutation(int depth)
{
	if (depth == M)
	{
		for (int i = 0; i < M; i++)
			std::cout << printArray[i] << ' ';
		std::cout << "\n";

		return;
	}

	for (int i = 1; i <= N; i++)
	{
		if (!isVisited[i - 1])
		{
			isVisited[i - 1] = true;
			printArray[depth] = i;
			PrintPermutation(depth + 1);
			isVisited[i - 1] = false;
		}
	}
}

int main()
{
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	std::cin >> N >> M;

	printArray = new int[M];

	isVisited = new bool[N];
	for (int i = 0; i < N; i++)
		isVisited[i] = false;

	PrintPermutation(0);

	delete[] printArray;
	delete[] isVisited;
}