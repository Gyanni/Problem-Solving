#include <bits/stdc++.h>

/**
 * 백준 10656
 * 십자말풀이
 * 2022-12-08
 * 구현
 */

using namespace std;
using ll = long long;

char puzzle[55][55];

bool isLowCLue(ll y, ll x) {
	if (x - 1 >= 0 && puzzle[y][x - 1] == '.') return false;
	if (puzzle[y][x] == '#') return false;
	if (puzzle[y][x + 1] != '.' || puzzle[y][x + 2] != '.') return false;
	return true;
}

bool isColumnCLue(ll y, ll x) {
	if (y - 1 >= 0 && puzzle[y - 1][x] == '.') return false;
	if (puzzle[y][x] == '#') return false;
	if (puzzle[y + 1][x] != '.' || puzzle[y + 2][x] != '.') return false;
	return true;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	ll n, m; cin >> m >> n;
	for (int i = 0; i < m; i++) {
		string tmp; cin >> tmp;
		for (int j = 0; j < n; j++) {
			puzzle[i][j] = tmp[j];
		}
	}

	vector<pair<ll, ll>> ans;
	ll cnt = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (isLowCLue(i, j) || isColumnCLue(i, j)) {
				cnt++;
				ans.push_back({ i + 1, j + 1 });
			}
		}
	}

	cout << cnt << "\n";
	for (auto k : ans) {
		cout << k.first << " " << k.second << "\n";
	}
}
