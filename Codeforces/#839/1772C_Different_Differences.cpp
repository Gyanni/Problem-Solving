#include <bits/stdc++.h>

/**
 * 1772C
 * Different Differences
 * 2022-12-28
 * greedy
 */

using namespace std;
using ll = long long;

ll k, n;
ll sia[20];
vector<ll> ans;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	sia[0] = 1;
	ll idx = 1, u = 1, diff = 1;
	while (u + diff <= 40) {
		sia[idx] = u + diff;
		idx++; diff++;  u = sia[idx - 1];
	}

	ll t; cin >> t;
	while (t--) {
		cin >> k >> n;

		n -= k - 1;
		vector<ll> a(k);
		a[0] = 1;
		for (int i = 1; i < k; ++i) {
			a[i] = min(a[i - 1] + i - 1, n);
		}
		for (int i = 0; i < k; ++i)
			a[i] += i;
		for (auto l : a) cout << l << " ";
		cout << "\n";
	}
}
