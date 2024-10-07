#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int participant_Num;
	cin >> participant_Num;

	vector<int> tShirt_Size_Num(6);
	for (int i = 0; i < tShirt_Size_Num.size(); i++)
	{
		cin >> tShirt_Size_Num[i];
	}

	int tShirt_Bundle_Num;
	int pen_Bundle_Num;

	cin >> tShirt_Bundle_Num;
	cin >> pen_Bundle_Num;

	int tShirt_result = 0;
	for (int i = 0; i < tShirt_Size_Num.size(); i++)
	{
		if (tShirt_Size_Num[i] == 0)
		{
			continue;
		}
		else
		{
			if(tShirt_Size_Num[i] % tShirt_Bundle_Num == 0)
				tShirt_result += tShirt_Size_Num[i] / tShirt_Bundle_Num;
			else
				tShirt_result += tShirt_Size_Num[i] / tShirt_Bundle_Num + 1;
		}
	}

	int pen_Bundle_result = participant_Num / pen_Bundle_Num;
	int pen_result = participant_Num % pen_Bundle_Num;

	cout << tShirt_result << endl;
	cout << pen_Bundle_result << " " << pen_result;

	return 0;
}