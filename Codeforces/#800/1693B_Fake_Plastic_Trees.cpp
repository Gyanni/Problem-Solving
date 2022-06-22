// Author : Gyanni
// Date : 2022-06-22

#include <bits/stdc++.h>

using namespace std;

long long le[200020], ri[200020], lazy[200020], dp[200020];
int par[200020];
int n;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		cin >> n;
		memset(lazy, 0, sizeof(lazy));
		memset(dp, 0, sizeof(dp));

		for (int i = 0; i < n - 1; i++) {
			cin >> par[i + 2];
		}

		for (int i = 1; i <= n; i++) {
			cin >> le[i] >> ri[i];
		}

		for (int i = n; i > 0; i--) {
			int parv = par[i];
			if (lazy[i] > ri[i]) lazy[i] = ri[i];
			le[i] -= lazy[i]; ri[i] -= lazy[i];
			if (le[i] > 0) {
				dp[parv] += dp[i] + 1;
				lazy[parv] += ri[i] + lazy[i];
			}

			else {
				lazy[parv] += lazy[i];
				dp[parv] += dp[i];
			}
		}


		cout << dp[0] << "\n";
	}
}

// tree, greedy, simple dp
// 1700
