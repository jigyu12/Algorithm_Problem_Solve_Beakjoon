#include <iostream>

using namespace std;

// n! �� 2 x 5 = 10 �̰�, 10�� ������ŭ ���� 0�� ������ ���� �ǹǷ� 2 x 5 ��Ʈ�� ������ ���ָ� �ȴ�.
// 1 * 2 * 3 * .... * n-1 * n ������ �� ���� 2�� 5�� ������ ���ָ� �ȴ�.
// 2�� 5�� ��Ʈ�� �̷�� �ִ� ����(2�� 5�� ���� ������ ��Ʈ ��)�� ����.
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