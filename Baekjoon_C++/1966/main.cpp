#include <iostream>
#include <string>
#include <queue>
#include <sstream>

int main()
{
	std::string testCaseNum;

	std::getline(std::cin, testCaseNum);

	for (int i = 0; i < std::stoi(testCaseNum); i++)
	{
		std::string buffer;

		std::string docInfo;
		std::getline(std::cin, docInfo);

		std::vector<int> docInfoVec;

		std::istringstream iss(docInfo);

		while (std::getline(iss, buffer, ' '))
		{
			docInfoVec.push_back(std::stoi(buffer));
		}

		std::string prioritys;
		std::getline(std::cin, prioritys);

		std::queue<std::pair<int, int>> priorityIndexQueue;
		std::priority_queue<int> priorityPQueue;

		iss.clear();
		iss.str(prioritys);

		int index = 0;
		while (std::getline(iss, buffer, ' '))
		{
			int priority = std::stoi(buffer);
			priorityIndexQueue.push(std::make_pair(priority, index++));
			priorityPQueue.push(priority);
		}

		int printOrder = 1;
		while (!priorityIndexQueue.empty())
		{
			if (priorityPQueue.top() == priorityIndexQueue.front().first)
			{
				if (docInfoVec[1] == priorityIndexQueue.front().second)
				{
					std::cout << printOrder << std::endl;

					break;
				}
				else
				{
					priorityIndexQueue.pop();
					priorityPQueue.pop();

					printOrder++;
				}
			}
			else
			{
				auto temp = priorityIndexQueue.front();
				priorityIndexQueue.pop();
				priorityIndexQueue.push(temp);
			}
		}
	}
}