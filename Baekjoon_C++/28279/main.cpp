#include <iostream>
#include <deque>

class Deque 
{
private :
	std::deque<int> dq;

public :
	void command(int cmd, int num);
	void command(int cmd);
};

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int n;
	std::cin >> n;
	Deque dq;
	for (int i = 0; i < n; i++) 
	{
		int cmd;
		std::cin >> cmd;
		if (cmd == 1 || cmd == 2) 
		{
			int input;
			std::cin >> input;
			dq.command(cmd, input);
		}
		else 
		{
			dq.command(cmd);
		}
	}
	return 0;
}

void Deque::command(int cmd, int num)
{
	if (cmd == 1) 
	{
		dq.push_front(num);
	}
	else if(cmd == 2) 
	{
		dq.push_back(num);
	}
	else 
	{
		std::cout << "잘못된 명령" << "\n";
	}
}

void Deque::command(int cmd)
{
	if (cmd == 3) 
	{
		if (dq.empty())
		{
			std::cout << -1 << "\n";
		}
		else
		{
			std::cout << dq.front() << "\n";
			dq.pop_front();
		}
	}
	else if (cmd == 4) 
	{
		if (dq.empty())
		{
			std::cout << -1 << "\n";
		}
		else
		{
			std::cout << dq.back() << "\n";
			dq.pop_back();
		}
	}
	else if (cmd == 5) 
	{
		std::cout << dq.size() << "\n";
	}
	else if (cmd == 6)
	{
		if (dq.empty())
		{
			std::cout << 1 << "\n";
		}
		else
		{
			std::cout << 0 << "\n";
		}
	}
	else if (cmd == 7) 
	{
		if (dq.empty())
		{
			std::cout << -1 << "\n";
		}
		else
		{
			std::cout << dq.front() << "\n";
		}
	}
	else if (cmd == 8) 
	{
		if (dq.empty())
		{
			std::cout << -1 << "\n";
		}
		else
		{
			std::cout << dq.back() << "\n";
		}
	}
	else 
	{
		std::cout << "잘못된 명령" << "\n";
	}
}