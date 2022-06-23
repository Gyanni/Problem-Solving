// Author : Gyanni
// Date : 2022-06-23

#include <bits/stdc++.h>

using namespace std;

int board[1010][1010];
int mx[1010][1010], mn[1010][1010];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	int t; cin >> t;
	while (t--) {
		int n, m; cin >> n >> m;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> board[i][j];
			}
		}

		if ((n + m) % 2 == 0) {
			cout << "NO" << "\n";
			continue;
		}

		mn[0][0] = mx[0][0] = board[0][0];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (i == 0) {
					mx[i][j] = board[i][j] + mx[i][j - 1];
					mn[i][j] = board[i][j] + mn[i][j - 1];
				}

				else if (j == 0) {
					mx[i][j] = board[i][j] + mx[i - 1][j];
					mn[i][j] = board[i][j] + mn[i - 1][j];
				}

				else {
					mx[i][j] = board[i][j] + max(mx[i - 1][j], mx[i][j - 1]);
					mn[i][j] = board[i][j] + min(mn[i - 1][j], mn[i][j - 1]);
				}
			}
		}

		if (mn[n - 1][m - 1] <= 0 && mx[n - 1][m - 1] >= 0) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	
	}
	
}

// simple dp
// 1700
