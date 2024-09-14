// 팩토리얼 정수 자료형 주의 : 20! 정도면 unsigned long long int로도 한계다.
// nCk = (n!)/((n-k!)*(k!)) -> 괄호씩 따로 계산하면 숫자가 너무 커지므로 n!/n-k! 을 n부터 n-k+1까지 곱하는 것으로 간주,
// k!은 1부터 k까지 곱하는 것 이므로, res = 1에 n을 곱하고 1 나누고, 다시 res에 n-1을 곱하고 2 나누고,
// 최종적으론 res에 n-k+1을 곱하고 k를 나누는 형식으로 작성했다.
// 잘 생각해보면 n ~ n-k+1 과 1 ~ k의 개수가 같다는 것을 알 수 있다.

#include <iostream>

int main()
{
	int i;
	std::cin >> i;

	while (i != 0)
	{
		int n, k;
		std::cin >> k >> n;

		unsigned long long int res = 1;
		int temp = 1;
		
		for (int i = n; i > n - k; i--)
		{
			res *= i;
			res /= temp;
			temp++;
			
			// res *= i / temp++; 는 안된다. res / temp는 딱 떨어지지만, i / temp는 안떨어지는 경우가 생기기 때문.
			// res / temp가 딱 떨어지는 이유는 i = 임의의 숫자, temp = 1로 시작해 각각 하나씩 줄이고 늘려가며 고민해보면 된다.
			// 구체적으론, 아무 임의의 숫자를 뽑아도 본인 포함 +-3개 안에 3의 배수가 반드시 포함된다.
		}
		std::cout << res << std::endl;
		
		i--;
	}
}