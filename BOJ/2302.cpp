#include <bits/stdc++.h>

/**
 * 2302
 * 극장 좌석
 * 2022-12-17
 * dp
 */

using namespace std;
using ll = long long;

ll n, k;
ll dp[44];
vector<ll> vip, ans;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	cin >> n >> k;
	for (int i = 0; i < k; i++) {
		ll tmp; cin >> tmp;
		vip.push_back(tmp);
	}

	dp[1] = 1; dp[2] = 2;
	for (int i = 3; i <= 40; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	if (k == 0) {
		cout << dp[n] << "\n";
		return 0;
	}

	ll j = 0, cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (i == vip[j]) {
			if (cnt) ans.push_back(dp[cnt]);
			cnt = 0;
			if (j != vip.size() - 1) j++;
			continue;
		}
		cnt++;
	}
	if (cnt) ans.push_back(dp[cnt]);

	ll ret = 1;
	for (int i = 0; i < ans.size(); i++) ret *= ans[i];
	cout << ret << "\n";
	
}
