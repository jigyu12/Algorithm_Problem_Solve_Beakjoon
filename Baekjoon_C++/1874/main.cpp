#include <iostream>
#include <list>
#include <stack>
#include <vector>

int main()
{
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int numCount;

	std::cin >> numCount;

	std::list<int> sequenceList;
	for (int i = 0; i < numCount; i++)
	{
		int number;
		std::cin >> number;

		sequenceList.push_back(number);
	}

	std::stack<int> sequenceStack;
	int checkNum = 0;
	std::vector<int> resultCharVec;
	bool isSequenceMakeable = true;
	while (!sequenceList.empty())
	{
		int listFront = sequenceList.front();
		if (checkNum < listFront)
		{
			for (int i = checkNum + 1; i <= listFront; i++)
			{
				sequenceStack.push(i);
				resultCharVec.push_back('+');
			}

			checkNum = listFront;

			sequenceStack.pop();
			sequenceList.pop_front();
			resultCharVec.push_back('-');
		}
		else if (checkNum > listFront)
		{
			if (sequenceStack.top() != listFront)
			{
				isSequenceMakeable = false;

				break;
			}
			else
			{
				sequenceStack.pop();
				sequenceList.pop_front();
				resultCharVec.push_back('-');
			}
		}
		else
			std::cout << "error!" << "\n";
	}

	if (isSequenceMakeable)
	{
		for (int i = 0; i < resultCharVec.size(); i++)
			std::cout << (char)resultCharVec[i] << "\n";
	}
	else
		std::cout << "NO";
}