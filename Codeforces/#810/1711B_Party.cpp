// Author : Gyanni
// Date : 2022-08-22

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll n, m;
ll uh[100010], le[100010], ri[100010];
ll cnt[100010];
ll ans;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	ll t; cin >> t;
	while (t--) {
		ans = 987654321;
		cin >> n >> m;

		for (ll i = 1; i <= n; i++) {
			cin >> uh[i];
			cnt[i] = 0;
		}

		for (ll i = 1; i <= m; i++) {
			cin >> le[i] >> ri[i];
			cnt[le[i]]++; cnt[ri[i]]++;
		}

		if (m % 2 == 0) {
			cout << 0 << "\n";
			continue;
		}

		for (ll i = 1; i <= n; i++) {
			if (cnt[i] % 2 == 1) {
				ans = min(ans, uh[i]);
				// cout << "\n" << "# " << i << "\n";
			}
		}

		for (ll i = 1; i <= m; i++) {
			if (cnt[le[i]] % 2 == 0 && cnt[ri[i]] % 2 == 0)
				ans = min(ans, uh[le[i]] + uh[ri[i]]);
		}

		cout << ans << "\n";
	}
}

// simple implementation
// 1300
