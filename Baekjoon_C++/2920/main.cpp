#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> num(8);

	for (int i = 0; i < num.size(); i++)
	{
		cin >> num.at(i);
	}

	bool isAscending = true;
	bool isDescending = true;
	bool isMixed = true;

	for (int i = 0; i < num.size() - 1; i++)
	{
		if (num.at(i) + 1 == num.at(i + 1))
		{
			isDescending = false;

			if (i == num.size() - 2)
				isMixed = false;
		}
		else if (num.at(i) - 1 == num.at(i + 1))
		{
			isAscending = false;

			if (i == num.size() - 2)
				isMixed = false;
		}
		else
		{
			isAscending = false;
			isDescending = false;
			break;
		}
	}

	if (isAscending)
	{
		cout << "ascending";
	}
	else if (isDescending)
	{
		cout << "descending";
	}
	else if (isMixed)
	{
		cout << "mixed";
	}

	return 0;
}