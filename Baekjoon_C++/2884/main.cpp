#include <iostream>

using namespace std;

int main() {
	int h;
	int m;
	cin >> h >> m;
	int h_new = h;
	int m_new = m - 45;
	if (m_new < 0) {
		h_new -= 1;
		if (h_new < 0) {
			h_new = 24 + h_new;
		}
	}
	if (m_new < 0) {
		m_new = 60 + m_new;
	}
	cout << h_new << " " << m_new;
	return 0;
}