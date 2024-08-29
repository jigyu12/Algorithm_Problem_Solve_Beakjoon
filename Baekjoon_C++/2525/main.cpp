#include <iostream>

using namespace std;

int main() {
	int h;
	int m;
	int t;
	cin >> h >> m >> t;
	int h_new = h;
	int m_new = m + t;
	if (m_new >= 60) {
		h_new += m_new / 60;
		m_new %= 60;
	}
	if (h_new >= 24) {
		h_new %= 24;
	}
	cout << h_new << " " << m_new;
	return 0;
}