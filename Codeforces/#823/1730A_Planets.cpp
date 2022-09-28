// Author : Gyanni
// Date : 2022-09-28

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll orb[101];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	ll t; cin >> t;

	while (t--) {
		ll ans = 0;
		memset(orb, 0, sizeof(orb));
		ll n, c; cin >> n >> c;

		for (int i = 0; i < n; i++) {
			ll tmp; cin >> tmp;
			orb[tmp]++;
		}

		for (int i = 1; i <= 100; i++) {
			if (!orb[i]) continue;

			ans += min(c, orb[i]);
		}

		cout << ans << "\n";
	}
}

// simple implementation
// 800
