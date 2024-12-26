// 매번 큰 사이즈의 벡터를 함수 호출마다 생성해서 시간 초과가 났다. 조심하자.

#include <iostream>
#include <vector>
#include <cmath>

void Merge(std::vector<int>& A, int p, int q, int r, int K, int& saveCount, bool& isAnsExist, std::vector<int>& tmp)
{
	if (isAnsExist)
		return;

	// std::vector<int> tmp(numVec.size()); !쓸데 없는 코드!

	int i = p;
	int j = q + 1;
	int t = 0;
	while (i <= q && j <= r)
	{
		if (A[i] <= A[j])
			tmp[t++] = A[i++];
		else
			tmp[t++] = A[j++];
	}

	while (i <= q)
		tmp[t++] = A[i++];

	while (j <= r)
		tmp[t++] = A[j++];

	i = p;
	t = 0;
	while (i <= r)
	{
		saveCount++;
		if (saveCount == K)
		{
			isAnsExist = true;

			std::cout << tmp[t];

			return;
		}

		A[i++] = tmp[t++];
	}
}

void MergeSort(std::vector<int>& A, int p, int r, int K, int& saveCount, bool& isAnsExist, std::vector<int>& tmp)
{
	if (isAnsExist)
		return;

	if (p < r)
	{
		int q = std::floor(((double)p + r) / 2);
		MergeSort(A, p, q, K, saveCount, isAnsExist, tmp);
		MergeSort(A, q + 1, r, K, saveCount, isAnsExist, tmp);
		Merge(A, p, q, r, K, saveCount, isAnsExist, tmp);
	}
}

int main()
{
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int N, K;
	std::cin >> N >> K;

	std::vector<int> numVec(N);
	for (int i = 0; i < N; i++)
	{
		std::cin >> numVec[i];
	}

	int saveCount = 0;
	bool isAnsExist = false;
	std::vector<int> tmp(numVec.size());
	MergeSort(numVec, 0, numVec.size() - 1, K, saveCount, isAnsExist, tmp);

	if(!isAnsExist)
		std::cout << -1;
}