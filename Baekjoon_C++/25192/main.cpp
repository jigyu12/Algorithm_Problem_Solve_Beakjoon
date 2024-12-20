#include <iostream>
#include <string>
#include <set>

int main()
{
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int chatCount;
	std::cin >> chatCount;

	int result = 0;
	std::set<std::string> nicknameSet;
	for (int i = 0; i < chatCount; i++)
	{
		std::string chat;
		std::cin >> chat;

		if (chat.compare("ENTER") == 0)
		{
			nicknameSet.clear();
		}
		else
		{
			bool isInsertSuccess = nicknameSet.insert(chat).second;
			if (isInsertSuccess)
				result++;
		}
	}

	std::cout << result;
}