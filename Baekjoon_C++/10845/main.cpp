#include <iostream>
#include <queue>
#include <string>

int main()
{
	std::queue<int> queue;

	std::string lineNum;

	std::getline(std::cin, lineNum);

	for (int i = 0; i < std::stoi(lineNum); i++)
	{
		std::string command;

		std::getline(std::cin, command);

		if (command.substr(0, 4) == "push")
		{
			queue.push(std::stoi(command.substr(5, command.length() - 5)));
		}
		else if (command.substr(0, 3) == "pop")
		{
			if (queue.empty())
				std::cout << -1 << std::endl;
			else
			{
				std::cout << queue.front() << std::endl;
				queue.pop();
			}
		}
		else if (command.substr(0, 4) == "size")
		{
			std::cout << queue.size() << std::endl;
		}
		else if (command.substr(0, 5) == "empty")
		{
			if (queue.empty())
				std::cout << 1 << std::endl;
			else
			{
				std::cout << 0 << std::endl;
			}
		}
		else if (command.substr(0, 5) == "front")
		{
			if (queue.empty())
				std::cout << -1 << std::endl;
			else
			{
				std::cout << queue.front() << std::endl;
			}
		}
		else if (command.substr(0, 4) == "back")
		{
			if (queue.empty())
				std::cout << -1 << std::endl;
			else
			{
				std::cout << queue.back() << std::endl;
			}
		}
		else
		{
			std::cout << "Error!" << std::endl;
		}
	}
}