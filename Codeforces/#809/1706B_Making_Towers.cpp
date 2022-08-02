// Author : Gyanni
// Date : 2022-08-02

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll n;
ll dp[2][100010];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	ll t; cin >> t;
	while (t--) {
		cin >> n;

		for (int i = 0; i < 2; i++) {
			memset(dp[i], 0, sizeof(dp[i]));
		}

		for (int i = 1; i <= n; i++) {
			ll tmp; cin >> tmp;

			dp[i & 1][tmp] = max(dp[i & 1][tmp], dp[(i ^ 1) & 1][tmp] + 1);
		}

		for (int i = 1; i <= n; i++) {
			cout << max(dp[0][i], dp[1][i]) << " ";
		}

		cout << "\n";
	}
}

// simple dp
// 1100
