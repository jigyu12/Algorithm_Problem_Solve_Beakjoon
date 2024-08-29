#include <iostream>
#include <deque>

int main()
{
	std::pair<int, int> balloon;
	std::deque<std::pair<int, int>> dq;
	int n;
	std::cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int temp;
		std::cin >> temp;
		dq.push_back(std::make_pair(i, temp));
	}
	int move = 1;
	while (dq.size() != 1)
	{
		if (move > 0)
		{
			for (int i = 0; i < move - 1; i++)
			{
				dq.push_back(dq.front());
				dq.pop_front();
			}
		}
		else
		{
			dq.push_front(dq.back());
			dq.pop_back();
			for (int i = 0; i < abs(move) - 1; i++)
			{
				dq.push_front(dq.back());
				dq.pop_back();
			}
		}
		std::cout << dq.front().first << " ";
		move = dq.front().second;
		dq.pop_front();
	}
	std::cout << dq.front().first;
	return 0;
}