#include <iostream>
#include <algorithm>

int euclidean(int a, int b);

int main() {
	int n;
	std::cin >> n;
	int* tree = new int[n];
	for (int i = 0; i < n; i++) {
		std::cin >> tree[i];
	}
	std::sort(tree, tree+n);
	int greatest_common_divisor;
	for (int i = 0; i < n - 1; i++) {
		if (i == 0) {
			greatest_common_divisor = tree[i + 1] - tree[i];
		}
		else {
			if (greatest_common_divisor >= tree[i + 1] - tree[i]) {
				greatest_common_divisor = euclidean(greatest_common_divisor, tree[i + 1] - tree[i]);
			}
			else {
				greatest_common_divisor = euclidean(tree[i + 1] - tree[i], greatest_common_divisor);
			}
		}
	}
	std::cout << ((tree[n - 1] - tree[0]) / greatest_common_divisor) - (n - 1);
	delete[] tree;
	return 0;
}

int euclidean(int a, int b) {
	int c = a % b;
	if (c == 0) {
		return b;
	}
	return euclidean(b, c);
}