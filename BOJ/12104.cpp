#include <bits/stdc++.h>

/**
 * BOJ 12104
 * 순환 순열
 * 2022-12-28
 * kmp
 */

using namespace std;
using ll = long long;

ll pi[200010];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	string a, b; cin >> a >> b;
	b = b + b;

	ll j = 0, n = a.length();
	for (ll i = 1; i < n; i++) {
		while (j > 0 && a[i] != a[j]) j = pi[j - 1];

		if (a[i] == a[j]) pi[i] = ++j;
	}

	ll m = b.length(), ans = 0;
	j = 0;
	for (ll i = 0; i < m - 1; i++) {
		while (j > 0 && b[i] != a[j]) j = pi[j - 1];

		if (b[i] == a[j]) {
			if (j == n - 1) {
				ans++;
				j = pi[j];
			}

			else ++j;
		}
	}

	cout << ans << "\n";
}
