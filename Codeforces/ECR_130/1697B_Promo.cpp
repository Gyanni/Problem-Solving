// Author : Gyannu
// Date : 2022-06-14

#include <bits/stdc++.h>

using namespace std;

long long pr[200020], culpr[200020];

int main() {

	long long n, q; cin >> n >> q;

	for (int i = 0; i < n; i++) cin >> pr[i];
	sort(pr, pr + n, [](long long a, long long b) {
		return a > b;
	});

	culpr[0] = pr[0];
	for (int i = 1; i < n; i++) {
		culpr[i] = culpr[i - 1] + pr[i];
	}

	while (q--) {
		long long x, y; cin >> x >> y;

		long long ans = 0;

		if (x - y - 1 < 0) {
			cout << culpr[x - 1] << "\n";
			continue;
		}

		ans = culpr[x - 1] - culpr[x - y - 1];

		cout << ans << "\n";
	}
}

// sorting, greedy
// 900
