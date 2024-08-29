#include <iostream>
#include <stack>

class Stack
{
private:
	std::stack<int> s;
public:
	void command(int num, int input)
	{
		switch (num)
		{
		case 1:
			s.push(input);
			break;
		default:
			std::cout << "잘못된 입력" << "\n";
			break;
		}
	}

	void command(int num)
	{
		switch (num)
		{
		case 2:
			if (s.empty())
			{
				std::cout << -1 << "\n";
			}
			else
			{
				std::cout << s.top() << "\n";
				s.pop();
			}
			break;
		case 3:
			std::cout << s.size() << "\n";
			break;
		case 4:
			if (s.empty())
			{
				std::cout << 1 << "\n";
			}
			else
			{
				std::cout << 0 << "\n";
			}
			break;
		case 5:
			if (s.empty())
			{
				std::cout << -1 << "\n";
			}
			else
			{
				std::cout << s.top() << "\n";
			}
			break;
		default:
			std::cout << "잘못된 입력" << "\n";
			break;
		}
	}
};

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	Stack s;
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		int temp;
		std::cin >> temp;
		if (temp == 1)
		{
			int input;
			std::cin >> input;
			s.command(temp, input);
		}
		else
		{
			s.command(temp);
		}
	}

	return 0;
}