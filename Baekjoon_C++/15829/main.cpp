// https://codejin.tistory.com/68 ������ �й� ��Ģ
// �� �Ѳ����� ���Ѱ��� ��������, ���ϱ� �ѹ��� ������ ���� �ѹ� �ݺ��ѰŶ� ����� ���ٰ� �ܿ���.
// (���ϱ⵵ ��������)

//        (31 * 31 * 31 * .... * 31) % M
//        = ((31 % M)* (31 % M)* (31 % M) ... (31 % M)) % M
//        = (((((31 % M) * 31) % M) * 31) % M ........... * 31) % M ) (������ ��������)

#include <iostream>

using namespace std;

int main()
{
	int str_Size;
	cin >> str_Size;

	string str;
	cin >> str;

	long long r = 31;
	long long M = 1234567891;
	long long R = 1;

	long long hash = 0;

	for (int i = 0; i < str_Size; i++)
	{
		hash += ((str[i] - 'a' + 1) * R) % M;
		R = (R * r) % M;
		hash %= M;
	}
	
	cout << hash;

	return 0;
}


// ���ڿ� �� ��(���� ǥ�� ���ڿ�)�� �Է� ������ ū �� ����, �� ����(����, ����) ���ִ� �Լ�
/*
#include <vector>
#include <string> // to_string �� ���

string BigIntegerPlus(string operand1, string operand2);
string BigIntegerMulti(string operand1, string operand2);

string BigIntegerPlus(string operand1, string operand2)
{
	bool isCarry = false;
	string result = "";

	if (operand1.size() < operand2.size())
	{
		int operand2_inx = operand2.size() - 1;

		for (int i = operand1.size() - 1; i >= 0; i--)
		{
			if (isCarry)
			{
				int c = (operand1[i] - '0') + (operand2[operand2_inx--] - '0') + 1;

				if (c / 10 == 1)
				{
					isCarry = true;
					c %= 10;
				}
				else
				{
					isCarry = false;
				}
				
				string temp = "";
				temp += (char)(c + '0');
				result.insert(0, temp);
			}
			else 
			{
				int c = (operand1[i] - '0') + (operand2[operand2_inx--] - '0');

				if (c / 10 == 1)
				{
					isCarry = true;
					c %= 10;
				}
				else
				{
					isCarry = false;
				}

				string temp = "";
				temp += (char)(c + '0');
				result.insert(0, temp);
			}
		}

		for (int i = operand2.size() - operand1.size() - 1; i >= 0; i--)
		{
			if (isCarry)
			{
				int c = (operand2[i] - '0') + 1;

				if (c / 10 == 1)
				{
					isCarry = true;
					c %= 10;
				}
				else 
				{
					isCarry = false;
				}
				
				string temp = "";
				temp += (char)(c + '0');
				result.insert(0, temp);
			}
			else
			{
				int c = (operand2[i] - '0');

				if (c / 10 == 1)
				{
					isCarry = true;
					c %= 10;
				}
				else
				{
					isCarry = false;
				}

				string temp = "";
				temp += (char)(c + '0');
				result.insert(0, temp);
			}
		}

		if (isCarry)
		{
			result.insert(0, "1");
		}
	}
	else if (operand1.size() > operand2.size())
	{
		int operand1_inx = operand1.size() - 1;

		for (int i = operand2.size() - 1; i >= 0; i--)
		{
			if (isCarry)
			{
				int c = (operand2[i] - '0') + (operand1[operand1_inx--] - '0') + 1;

				if (c / 10 == 1)
				{
					isCarry = true;
					c %= 10;
				}
				else
				{
					isCarry = false;
				}

				string temp = "";
				temp += (char)(c + '0');
				result.insert(0, temp);
			}
			else
			{
				int c = (operand2[i] - '0') + (operand1[operand1_inx--] - '0');

				if (c / 10 == 1)
				{
					isCarry = true;
					c %= 10;
				}
				else
				{
					isCarry = false;
				}

				string temp = "";
				temp += (char)(c + '0');
				result.insert(0, temp);
			}
		}

		for (int i = operand1.size() - operand2.size() - 1; i >= 0; i--)
		{
			if (isCarry)
			{
				int c = (operand1[i] - '0') + 1;

				if (c / 10 == 1)
				{
					isCarry = true;
					c %= 10;
				}
				else
				{
					isCarry = false;
				}

				string temp = "";
				temp += (char)(c + '0');
				result.insert(0, temp);
			}
			else
			{
				int c = (operand1[i] - '0');

				if (c / 10 == 1)
				{
					isCarry = true;
					c %= 10;
				}
				else
				{
					isCarry = false;
				}

				string temp = "";
				temp += (char)(c + '0');
				result.insert(0, temp);
			}
		}

		if (isCarry)
		{
			result.insert(0, "1");
		}
	}
	else
	{
		int operand2_inx = operand2.size() - 1;

		for (int i = operand1.size() - 1; i >= 0; i--)
		{
			if (isCarry)
			{
				int c = (operand1[i] - '0') + (operand2[operand2_inx--] - '0') + 1;

				if (c / 10 == 1)
				{
					isCarry = true;
					c %= 10;
				}
				else
				{
					isCarry = false;
				}

				string temp = "";
				temp += (char)(c + '0');
				result.insert(0, temp);
			}
			else
			{
				int c = (operand1[i] - '0') + (operand2[operand2_inx--] - '0');

				if (c / 10 == 1)
				{
					isCarry = true;
					c %= 10;
				}
				else
				{
					isCarry = false;
				}

				string temp = "";
				temp += (char)(c + '0');
				result.insert(0, temp);
			}
		}

		if (isCarry)
		{
			result.insert(0, "1");
		}
	}

	return result;
}

string BigIntegerMulti(string operand1, string operand2)
{
	int Carry = 0;
	vector<string> multi_nums_list;
	string result = "0";
	int attach_zero_size = 0;

	for (int i = operand1.size() - 1; i >= 0; i--)
	{
		string s = "";

		for (int j = operand2.size() - 1; j >= 0; j--)
		{
			if (Carry > 0)
			{
				int mul = ((operand1[i] - '0') * (operand2[j] - '0')) + Carry;

				if (mul / 10 >= 1)
				{
					Carry = mul / 10;
					mul %= 10;
				}
				else
				{
					Carry = 0;
				}

				string temp = "";
				temp += (mul + '0');
				s.insert(0, temp);
			}
			else 
			{
				int mul = ((operand1[i] - '0') * (operand2[j] - '0'));

				if (mul / 10 >= 1)
				{
					Carry = mul / 10;
					mul %= 10;
				}
				else
				{
					Carry = 0;
				}

				string temp = "";
				temp += (mul + '0');
				s.insert(0, temp);
			}
		}

		if (Carry > 0)
		{
			string temp = "";
			temp += (Carry + '0');
			s.insert(0, temp);
			Carry = 0;
		}

		for (int k = 0; k < attach_zero_size; k++)
		{
			s += "0";
		}

		attach_zero_size++;

		multi_nums_list.push_back(s);
	}

	for (int i = 0; i < multi_nums_list.size(); i++)
	{
		result = BigIntegerPlus(result, multi_nums_list.at(i));
	}

	return result;
}
*/