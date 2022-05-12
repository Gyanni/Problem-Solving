// Author : Gyanni

#include <bits/stdc++.h>

using namespace std;

int maps[202][202];
int sum[202][202];
int n, m;

bool isok(int x, int y) {
	if (x >= m || y >= n || x < 0 || y < 0) return false;
	return true;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t; cin >> t;
	while (t--) {
		cin >> n >> m;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> maps[i][j];
			}
		}

		int ans = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				sum[i][j] = maps[i][j];
				for (int y = i - 1, x = j - 1; isok(x, y); ) {
					sum[i][j] += maps[y][x];
					x--; y--;
				}
				for (int y = i + 1, x = j - 1; isok(x, y); ) {
					sum[i][j] += maps[y][x];
					x--; y++;
				}
				for (int y = i - 1, x = j + 1; isok(x, y); ) {
					sum[i][j] += maps[y][x];
					x++; y--;
				}
				for (int y = i + 1, x = j + 1; isok(x, y); ) {
					sum[i][j] += maps[y][x];
					x++; y++;
				}
				ans = max(ans, sum[i][j]);
			}
		}

		cout << ans << "\n";
	}
}

// 1000
// brute force
