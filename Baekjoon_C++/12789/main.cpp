#include <iostream>
#include <queue>
#include <stack>

int main()
{
	int n;
	std::cin >> n;
	std::queue<int> q;
	std::stack<int> s;
	for (int i = 0; i < n; i++)
	{
		int temp;
		std::cin >> temp;
		q.push(temp);
	}
	int count = 1;
	bool isInOrder = true;
	while (true)
	{
		if (!q.empty() && s.empty())
		{
			if (q.front() == count)
			{
				q.pop();
				count++;
			}
			else 
			{
				s.push(q.front());
				q.pop();
			}
		}
		else if (q.empty() && !s.empty())
		{
			if (s.top() == count) {
				s.pop();
				count++;
			}
			else {
				isInOrder = false;
				break;
			}
		}
		else if (!q.empty() && !s.empty())
		{
			if (q.front() == count)
			{
				q.pop();
				count++;
			}
			else if (s.top() == count)
			{
				s.pop();
				count++;
			}
			else
			{
				s.push(q.front());
				q.pop();
			}
		}
		else 
		{
			break;
		}
	}
	if (isInOrder) 
	{
		std::cout << "Nice";
	}
	else 
	{
		std::cout << "Sad";
	}
	return 0;
}