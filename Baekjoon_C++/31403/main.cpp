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
	//s += (char)a; // �̷��� �ϸ� �������� �ش��ϴ� �ƽ�Ű �ڵ尡 ��µ�
					// ex) a = 3�̸� 3�� �ƽ�Ű�ڵ�� ����
	s += to_string(b);

	cout << to_string(stoi(s) - c); // #include <string> + stoi >> string�� int��
									// #include <string> + to_string >> ���ڸ� string����
}