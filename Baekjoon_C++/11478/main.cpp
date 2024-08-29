#include <iostream>
#include <set>

int main() {
	std::string s;
	std::cin >> s;
	std::set<std::string> part;
	for (int i = 1; i <= s.size(); i++) {
		for (int j = 0; j < (s.size() - i) + 1; j++) {
			std::string p = s.substr(j, i);
			//std::string p(s, j, i);
			part.insert(p);
		}
	}
	std::cout << part.size();
	return 0;
}