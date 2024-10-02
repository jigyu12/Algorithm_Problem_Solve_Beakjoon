#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	cout << a + b - c << endl;

	string s = ""; 
	s += to_string(a);
	//s += (char)a; // 이렇게 하면 정수값에 해당하는 아스키 코드가 출력됨
					// ex) a = 3이면 3번 아스키코드로 매핑
	s += to_string(b);

	cout << to_string(stoi(s) - c); // #include <string> + stoi >> string을 int로
									// #include <string> + to_string >> 숫자를 string으로
}