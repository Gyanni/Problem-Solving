// Author : Gyanni
// Date : 2022-09-06

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll n, m, sx, sy, k;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t; cin >> t;
	while (t--) {
		bool ans = true;
		cin >> n >> m >> sx >> sy >> k;

		if (sx - k <= 1 && sx + k >= n) ans = false;
		else if (sy - k <= 1 && sy + k >= m) ans = false;
		else if (sx - k <= 1 && sy - k <= 1) ans = false;
		else if (sx + k >= n && sy + k >= m) ans = false;

		if (ans) cout << n + m - 2 << "\n";
		else cout << -1 << "\n";
	}
}

// simple implementation
// 1000
