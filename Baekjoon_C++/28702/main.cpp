#include <iostream>
#include <cstdlib>

using namespace std;

// 3,5 �� ����� ���� 3���� �̾����� ���ڰ� ���� �ʱ� ������ ��� �� ���ӵǴ� ���ڸ� ��Ƶ� �ݵ�� ��� �� �Է��� ���ڰ� �ƴ� ���ڰ� ���� ���� �ٽ�
int main()
{
	string strs[3];
	int strs_length = 3;

	for (int i = 0; i < strs_length; i++)
	{
		cin >> strs[i];
	}


	int FizzBuzz_index = -1;
	int FizzBuzz_num = -1;
	for (int i = strs_length - 1; i >= 0; i--)
	{
		if (atoi(strs[i].c_str()) != 0) // atoi >> ���� + ���� �����϶� ��� �Ұ�(���� �κи� int�� ����), 0�� ���ϵǸ� ù ���ں��� ���ڶ�� ��
		{
			FizzBuzz_index = i + 1;
			FizzBuzz_num = atoi(strs[i].c_str());
			break;
		}
	}

	FizzBuzz_num += (strs_length - FizzBuzz_index + 1);

	if (FizzBuzz_num % 3 == 0 && FizzBuzz_num % 5 == 0)
		cout << "FizzBuzz";
	else if (FizzBuzz_num % 3 == 0 && FizzBuzz_num % 5 != 0)
		cout << "Fizz";
	else if (FizzBuzz_num % 3 != 0 && FizzBuzz_num % 5 == 0)
		cout << "Buzz";
	else
		cout << FizzBuzz_num;

	return 0;
}