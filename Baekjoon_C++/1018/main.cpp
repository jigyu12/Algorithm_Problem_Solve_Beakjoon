#include <iostream>
#include <climits>

using namespace std;

int compare_to_B(char[][8]);
int compare_to_W(char[][8]);

int main() {
	int n, m;
	cin >> n >> m;
	char** board = new char*[n];
	for (int i = 0; i < n; i++) {
		board[i] = new char[m];
	}
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < m; j++) {
			board[i][j] = s[j];
		}
	}
	int min = INT_MAX;
	for (int i = 0; i < n - 7; i++) {
		for (int j = 0; j < m - 7; j++) {
			char t_board[8][8];
			for (int x = i; x < i + 8; x++) {
				for (int y = j; y < j + 8; y++) {
					t_board[x - i][y - j] = board[x][y];
				}
			}
			int b = compare_to_B(t_board);
			if (min > b) {
				min = b;
			}
			int w = compare_to_W(t_board);
			if (min > w) {
				min = w;
			}
		}
	}
	cout << min;
	for (int i = 0; i < n; i++) {
		delete[] board[i];
	}
	delete[] board;
	return 0;
}

int compare_to_B(char board[][8]) {
	int cnt = 0;
	string b1 = "BWBWBWBW";
	string b2 = "WBWBWBWB";
	for (int i = 0; i < 8; i += 2) {
		for (int j = 0; j < 8; j++) {
			if (b1[j] != board[i][j]) {
				cnt++;
			}
		}
	}
	for (int i = 1; i < 8; i += 2) {
		for (int j = 0; j < 8; j++) {
			if (b2[j] != board[i][j]) {
				cnt++;
			}
		}
	}
	return cnt;
}

int compare_to_W(char board[][8]) {
	int cnt = 0;
	string w1 = "WBWBWBWB";
	string w2 = "BWBWBWBW";
	for (int i = 0; i < 8; i += 2) {
		for (int j = 0; j < 8; j++) {
			if (w1[j] != board[i][j]) {
				cnt++;
			}
		}
	}
	for (int i = 1; i < 8; i += 2) {
		for (int j = 0; j < 8; j++) {
			if (w2[j] != board[i][j]) {
				cnt++;
			}
		}
	}
	return cnt;
}