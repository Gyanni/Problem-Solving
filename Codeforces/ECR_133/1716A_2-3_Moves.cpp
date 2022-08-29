// Author : Gyanni
// Date : 2022-08-29

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	ll t; cin >> t;
	while (t--) {
		ll n; cin >> n;

		if (n == 1) {
			cout << 2 << "\n";
			continue;
		}

		n = (n / 3) + (n % 3 ? 1 : 0);
		cout << n << "\n";
	}
}

// simple implementation
// 800
