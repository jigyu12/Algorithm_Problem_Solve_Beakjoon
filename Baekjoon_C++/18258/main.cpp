#include <iostream>
#include <queue>

class Queue {
private :
	std::queue<int> q;

public :
	void command(std::string cmd, int num);
	void command(std::string cmd);
};

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	Queue q;
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::string s;
		std::cin >> s;
		if (s == "push")
		{
			int temp;
			std::cin >> temp;
			q.command(s, temp);
		}
		else
		{
			q.command(s);
		}
	}
	return 0;
}

void Queue::command(std::string cmd, int num) {
	if (cmd == "push")
	{
		q.push(num);
	}
	else
	{
		std::cout << "잘못된 명령" << "\n";
	}
}

void Queue::command(std::string cmd) {
	if (cmd == "pop")
	{
		if (q.empty()) 
		{
			std::cout << -1 << "\n";
		}
		else 
		{
			std::cout << q.front() << "\n";
			q.pop();
		}
	}
	else if (cmd == "size")
	{
		std::cout << q.size() << "\n";
	}
	else if (cmd == "empty")
	{
		if (q.empty())
		{
			std::cout << 1 << "\n";
		}
		else
		{
			std::cout << 0 << "\n";
		}
	}
	else if (cmd == "front")
	{
		if (q.empty())
		{
			std::cout << -1 << "\n";
		}
		else
		{
			std::cout << q.front() << "\n";
		}
	}
	else if (cmd == "back")
	{
		if (q.empty())
		{
			std::cout << -1 << "\n";
		}
		else
		{
			std::cout << q.back() << "\n";
		}
	}
	else
	{
		std::cout << "잘못된 명령" << "\n";
	}
}