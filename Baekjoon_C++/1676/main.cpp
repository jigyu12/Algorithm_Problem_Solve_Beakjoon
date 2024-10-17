#include <iostream>

using namespace std;

// n! 시 2 x 5 = 10 이고, 10의 개수만큼 하위 0의 개수가 결정 되므로 2 x 5 세트의 개수를 세주면 된다.
// 1 * 2 * 3 * .... * n-1 * n 까지의 각 항의 2와 5의 개수를 세주면 된다.
// 2와 5의 세트를 이룰수 있는 개수(2와 5중 적은 개수가 세트 수)가 정답.
int main()
{
	int num;

	cin >> num;

	int cntTwo = 0;
	int cntFive = 0;

	for (int i = 1; i <= num; i++)
	{
		int temp = i;

		while (temp % 2 == 0)
		{
			temp /= 2;
			cntTwo++;
		}

		while (temp % 5 == 0)
		{
			temp /= 5;
			cntFive++;
		}
	}

	if (cntTwo >= cntFive)
	{
		cout << cntFive;
	}
	else
	{
		cout << cntTwo;
	}

	return 0;
}