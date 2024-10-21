#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int numListSize;
	cin >> numListSize;

	vector<int> numList;
	for (int i = 0; i < numListSize; i++)
	{
		int temp;
		cin >> temp;
		numList.push_back(temp);
	}

	int numsSize;
	cin >> numsSize;

	vector<int> nums;
	for (int i = 0; i < numsSize; i++)
	{
		int temp;
		cin >> temp;
		nums.push_back(temp);
	}

	sort(numList.begin(), numList.end());

	for (int i = 0; i < numsSize; i++)
	{
		int numListIndexFoward = 0;
		int numListIndexLast = numListSize - 1;
		int numListIndexPivot = (numListIndexFoward + numListIndexLast) / 2;

		bool isExist = false;
		
		while (numListIndexFoward <= numListIndexLast)
		{
			if (numList[numListIndexPivot] == nums[i])
			{
				isExist = true;
				break;
			}
			else if (numList[numListIndexPivot] < nums[i])
			{
				numListIndexFoward = numListIndexPivot + 1;
			}
			else
			{
				numListIndexLast = numListIndexPivot - 1;
			}

			numListIndexPivot = (numListIndexFoward + numListIndexLast) / 2;
		}

		if (isExist)
			cout << "1" << "\n";
		else
			cout << "0" << "\n";

	}

	return 0;
}