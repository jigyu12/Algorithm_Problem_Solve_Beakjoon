#include <iostream>
#include <string>

using namespace std;

int main()
{
	while (true)
	{
		string num;
		bool isPalindrome = true;

		cin >> num;

		if (num.compare("0") == 0)
		{
			break;
		}

		for (int i = 0; i < num.size() / 2; i++)
		{
			if (num[i] != num[num.size() - 1 - i])
			{
				isPalindrome = false;
				break;
			}
		}

		if (isPalindrome)
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}
	}

	return 0;
}