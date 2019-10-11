#include <bits/stdc++.h>

using namespace std;

int mx[8] = { 0, 0, 1, -1, 1, -1, -1, 1 }, my[8] = { 1, -1, 0, 0, 1, 1, -1, -1 };
char board[5][5];

bool isOk(int x, int y) {
	if (x < 0 || y < 0 || x > 4 || y > 4) return false;
	return true;
}

bool dfs(int x, int y, string str, int ord) {
	if (str[ord] == '\0')
		return true;
	if (board[x][y] == str[ord]) {
		for (int i = 0; i < 8; i++) {
			int nowx = x + mx[i];
			int nowy = y + my[i];
			if (isOk(nowx, nowy)) {
				if (dfs(nowx, nowy, str, ord + 1))
					return true;
			}
		}
	}
	return false;
}

bool hasWord(string str) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (dfs(i, j, str, 0))
				return true;
		}
	}
	return false;
}

void solve() {
	string rep;
	for (int i = 0; i < 5; i++) {
		cin >> rep;
		for (int j = 0; j < 5; j++) {
			board[i][j] = rep[j];
		}
	}

	int N;
	string wrep[10];
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> wrep[i];
	}

	for (int i = 0; i < N; i++) {
		if (hasWord(wrep[i]))
			cout << wrep[i] << " YES" << "\n";
		else
			cout << wrep[i] << " NO" << "\n";
	}
}

int main() {
	int T;
	cin >> T;

	while (T--) {
		solve();
	}
}