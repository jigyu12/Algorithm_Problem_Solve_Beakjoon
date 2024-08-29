#include <iostream>
#include <string>
#include <stack>

int main()
{
	while (true)
	{
		std::string s;
		std::getline(std::cin, s);
		if (s == ".")
		{
			break;
		}
		std::stack<int> st;
		bool isBalance = true;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == '(')
			{
				st.push(0);
			}
			else if (s[i] == '[')
			{
				st.push(1);
			}
			else if (s[i] == ')')
			{
				if (st.empty())
				{
					isBalance = false;
					break;
				}
				else if (st.top() != 0)
				{
					isBalance = false;
					break;
				}
				else
				{
					st.pop();
				}
			}
			else if (s[i] == ']')
			{
				if (st.empty())
				{
					isBalance = false;
					break;
				}
				else if (st.top() != 1)
				{
					isBalance = false;
					break;
				}
				else
				{
					st.pop();
				}
			}
		}
		if (isBalance && st.empty())
		{
			std::cout << "yes" << "\n";
		}
		else
		{
			std::cout << "no" << "\n";
		}
	}
	return 0;
}