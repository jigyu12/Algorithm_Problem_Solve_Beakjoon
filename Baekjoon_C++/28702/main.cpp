#include <iostream>
#include <cstdlib>

using namespace std;

// 3,5 의 배수는 연속 3개로 이어지는 숫자가 오지 않기 때문에 어느 세 연속되는 숫자를 잡아도 반드시 어느 한 입력은 문자가 아닌 숫자가 오는 것이 핵심
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
		if (atoi(strs[i].c_str()) != 0) // atoi >> 숫자 + 문자 조합일땐 사용 불가(숫자 부분만 int로 리턴), 0이 리턴되면 첫 문자부터 문자라는 뜻
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