// Author : Gyanni
// Date : 2022-08-11

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll n, m;
ll h[200020];
ll lsum[200020], rsum[200020];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> h[i];
	for (int i = 1; i < n; i++) {
		lsum[i] = lsum[i - 1] + (h[i] < h[i + 1] ? 0 : h[i] - h[i + 1]);
	}

	for (int i = n; i > 1; i--) {
		rsum[i] = rsum[i + 1] + (h[i] < h[i - 1] ? 0 : h[i] - h[i - 1]);
	}

	for (int i = 0; i < m; i++) {
		ll st, fi; cin >> st >> fi;
		if (st < fi) cout << lsum[fi - 1] - lsum[st - 1] << "\n";
		else cout << rsum[fi + 1] - rsum[st + 1] << "\n";
	}
}

// simple dp
// 900
