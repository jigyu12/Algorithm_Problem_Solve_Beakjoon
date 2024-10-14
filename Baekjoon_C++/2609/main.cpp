#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	int greatestCommonDivisor = -1;
	int leastCommonMultiple = -1;

	if (a <= b)
	{
		for (int i = 1; i <= a; i++)
		{
			if (a % i == 0 && b % i == 0)
			{
				greatestCommonDivisor = i;
			}
		}

		leastCommonMultiple = greatestCommonDivisor * (a / greatestCommonDivisor) * (b / greatestCommonDivisor);

		cout << greatestCommonDivisor << endl;
		cout << leastCommonMultiple << endl;
	}
	else
	{
		for (int i = 1; i <= b; i++)
		{
			if (a % i == 0 && b % i == 0)
			{
				greatestCommonDivisor = i;
			}
		}

		leastCommonMultiple = greatestCommonDivisor * (a / greatestCommonDivisor) * (b / greatestCommonDivisor);

		cout << greatestCommonDivisor << endl;
		cout << leastCommonMultiple << endl;
	}

	return 0;
}