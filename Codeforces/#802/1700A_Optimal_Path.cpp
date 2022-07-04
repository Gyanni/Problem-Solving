// Author : Gyanni
// Date : 2022-07-04

#include <bits/stdc++.h>

using namespace std;

long long ans;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t; cin >> t;
	while (t--) {
		long long n, m; cin >> n >> m;
		ans = 0;

		ans += (m + 1) * m / 2;
		ans += m * (n + 1) * n / 2;
		ans -= m;

		cout << ans << "\n";
	}
}

// simple implementation
// 800
