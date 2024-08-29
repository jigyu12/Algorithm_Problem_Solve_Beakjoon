#include <iostream>
#include <stack>

int main()
{
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++) 
	{
		std::stack<int> s;
		bool isVPS = true;
		std::string temp;
		std::cin >> temp;
		for (int j = 0; j < temp.length(); j++) 
		{
			if (temp[j] == '(') 
			{
				s.push(0);
			}
			else 
			{
				if (s.empty()) 
				{
					isVPS = false;
					break;
				}
				else
				{
					s.pop();
				}
			}
		}
		if (isVPS && s.empty()) 
		{
			std::cout << "YES" << "\n";
		}
		else 
		{
			std::cout << "NO" << "\n";
		}
	}
	return 0;
}