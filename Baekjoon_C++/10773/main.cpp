#include <iostream>
#include <stack>

int main()
{
	std::stack<int> s;
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		int temp;
		std::cin >> temp;
		if (temp == 0) 
		{
			s.pop();
		}
		else 
		{
			s.push(temp);
		}
	}
	int result = 0;
	while (!s.empty()) 
	{
		result += s.top();
		s.pop();
	}
	std::cout << result;
	return 0;
}