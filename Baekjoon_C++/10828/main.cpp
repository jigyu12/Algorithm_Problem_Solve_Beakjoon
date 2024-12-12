#include <iostream>
#include <stack>
#include <string>

int main()
{
	std::stack<int> stack;

	std::string lineNum;
	std::getline(std::cin, lineNum);

	for (int i = 0; i < stoi(lineNum); i++)
	{
		std::string command;

		std::getline(std::cin, command);

		if (command.substr(0, 4) == "push")
		{
			stack.push(std::stoi(command.substr(5, command.length() - 5)));
		}
		else if (command.substr(0, 3) == "pop")
		{
			if (stack.empty())
				std::cout << -1 << std::endl;
			else
			{
				std::cout << stack.top() << std::endl;
				stack.pop();
			}
		}
		else if (command.substr(0, 4) == "size")
		{
			std::cout << stack.size() << std::endl;
		}
		else if (command.substr(0, 5) == "empty")
		{
			if (stack.empty())
				std::cout << 1 << std::endl;
			else
				std::cout << 0 << std::endl;
		}
		else if (command.substr(0, 3) == "top")
		{
			if (stack.empty())
				std::cout << -1 << std::endl;
			else
				std::cout << stack.top() << std::endl;
		}
		else
		{
			std::cout << "Error!" << std::endl;
		}
	}

	return 0;
}