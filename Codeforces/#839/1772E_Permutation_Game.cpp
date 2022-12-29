#include <bits/stdc++.h>

/**
 * 1772E
 * Permutation Game
 * 2022-12-29
 * game theory
 */

using namespace std;
using ll = long long;

bool desc(ll a, ll b) {
	return a > b;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	ll t; cin >> t;
	while (t--) {
		vector<ll> inp;
		ll k; cin >> k;
		for (ll i = 0; i < k; i++) {
			ll tmp; cin >> tmp;
			inp.push_back(tmp);
		}

		vector<ll> proto = inp;
		sort(inp.begin(), inp.end());
		vector<ll> asc = inp;
		sort(inp.begin(), inp.end(), desc);
		vector<ll> des = inp;

		ll fi = k, se = k, both = k;
		for (ll i = 0; i < k; i++) {
			if (proto[i] == asc[i]) fi--;
			if (proto[i] == des[i]) se--;
			if (proto[i] == asc[i] || proto[i] == des[i]) both--;
		}

		if (se >= fi + both) cout << "First" << "\n";
		else if (fi > se + both) cout << "Second" << "\n";
		else cout << "Tie" << "\n";
	}
}
