#include <iostream>
//#include <cmath>

int main()
{
	int n;
	int result = 1;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		result *= 2;
	}
	std::cout << result << std::endl;

	//std::cout << pow(2, n); ����!) pow�Լ��� double�� ��ȯ�̹Ƿ� �ʹ� ū ������ ���� ���Ѵ�. �����Ϸ��� for loop�� �´�.
}