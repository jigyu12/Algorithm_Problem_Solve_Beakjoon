#include <iostream>

using namespace std;

int main()
{
	string grade;
	cin >> grade;

	double score = 0.0;

	if (grade[0] == 'A')
	{
		score += 4.0;

		if (grade[1] == '+')
		{
			score += 0.3;
		}
		else if (grade[1] == '-')
		{
			score -= 0.3;
		}
	}
	else if (grade[0] == 'B')
	{
		score += 3.0;

		if (grade[1] == '+')
		{
			score += 0.3;
		}
		else if (grade[1] == '-')
		{
			score -= 0.3;
		}
	}
	else if (grade[0] == 'C')
	{
		score += 2.0;

		if (grade[1] == '+')
		{
			score += 0.3;
		}
		else if (grade[1] == '-')
		{
			score -= 0.3;
		}
	}
	else if (grade[0] == 'D')
	{
		score += 1.0;

		if (grade[1] == '+')
		{
			score += 0.3;
		}
		else if (grade[1] == '-')
		{
			score -= 0.3;
		}
	}
	
	cout << fixed;
	cout.precision(1);
	cout << score;

	return 0;
}