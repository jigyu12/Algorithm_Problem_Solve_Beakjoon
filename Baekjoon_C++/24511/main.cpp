#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	int* queueStack = new int[n];
	for (int i = 0; i < n; i++) 
	{
		int temp;
		std::cin >> temp;
		queueStack[i] = temp;
	}

	int* element = new int[n];
	for (int i = 0; i < n; i++) 
	{
		int temp;
		std::cin >> temp;
		element[i] = temp;
	}

	int m;
	std::cin >> m;

	int* input = new int[m];
	for (int i = 0; i < m; i++)
	{
		int temp;
		std::cin >> temp;
		input[i] = temp;
	}

	int cnt = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		if (cnt == m)
		{
			break;
		}
		else 
		{
			if (queueStack[i] == 0)
			{
				std::cout << element[i] << " ";
				cnt++;
			}
		}
	}
	for (int i = 0; i < m; i++)
	{
		if (cnt == m) 
		{
			break;
		}
		else 
		{
			std::cout << input[i] << " ";
			cnt++;
		}
	}

	delete[] queueStack;
	delete[] element;
	delete[] input;
	return 0;
}