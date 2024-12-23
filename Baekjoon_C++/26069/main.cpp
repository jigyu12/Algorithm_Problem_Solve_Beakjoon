#include <iostream>
#include <string>
#include <sstream>
#include <unordered_set>

int main()
{
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int dancePeoplesCount;
	std::cin >> dancePeoplesCount;
	std::getchar();

	std::unordered_set<std::string> dancePeople;

	std::string name[2];
	for (int i = 0; i < dancePeoplesCount; i++)
	{
		std::string inputName;
		std::getline(std::cin, inputName);
		std::istringstream iss(inputName);

		iss >> name[0] >> name[1];

		if (dancePeople.find(name[0]) != dancePeople.end() || dancePeople.find(name[1]) != dancePeople.end()
			|| name[0].compare("ChongChong") == 0 || name[1].compare("ChongChong") == 0)
		{
			dancePeople.insert(name[0]);
			dancePeople.insert(name[1]);
		}
	}

	std::cout << dancePeople.size();
}