#include <bits/stdc++.h>

/**
 * 백준 1748
 * 수 이어 쓰기1
 * 2022-12-06
 * 구현
 */

using namespace std;
using ll = long long;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	ll k; cin >> k;

	ll tmp = 9, mul = 1;
	ll ans = 0;

	while (k > 0) {
		if (tmp < k) {
			ans += tmp * mul;
		}

		else {
			ans += k * mul;
		}
		k -= tmp;
		mul++; tmp *= 10;
	}

	cout << ans << "\n";

	
}
