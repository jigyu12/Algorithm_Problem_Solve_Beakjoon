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

	//std::cout << pow(2, n); 주의!) pow함수는 double형 반환이므로 너무 큰 정수는 담지 못한다. 안전하려면 for loop가 맞다.
}