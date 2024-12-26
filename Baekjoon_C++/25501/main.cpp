// string 레퍼런스로 안넘기면 timeOut 난다. 넘기는 상황에 따라 const와 & 붙이는걸 잊지말자.

#include <iostream>
#include <string>

int recursion(const std::string& s, int left, int right, int& recursionCallCount)
{
	recursionCallCount++;

	if (left >= right) 
		return 1;
	else if (s[left] != s[right]) 
		return 0;
	else 
		return recursion(s, left + 1, right - 1, recursionCallCount);
}

int isPalindrome(const std::string& s, int& recursionCallCount)
{
	return recursion(s, 0, s.length() - 1, recursionCallCount);
}

int main()
{
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int num;
	std::cin >> num;

	for (int i = 0; i < num; i++)
	{
		std::string s;
		std::cin >> s;

		int recursionCallCount = 0;

		int palindrome = isPalindrome(s, recursionCallCount);
		
		std::cout << palindrome << " " << recursionCallCount << "\n";
	}
}