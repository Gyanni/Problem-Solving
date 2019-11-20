#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	vector<int> x(m);
	for (int i = 0; i < m; i++) {
		cin >> x[i];
		--x[i];
	}

	vector<long long> res(n);
	for (int i = 0; i < m - 1; i++) {
		res[0] += abs(x[i] - x[i + 1]);
	}

	vector<int> cnt(n);
	vector<vector<int>> adj(n);
	for (int i = 0; i < m - 1; i++) {
		int l = x[i], r = x[i + 1];
		if (l != r) {
			adj[l].push_back(r);
			adj[r].push_back(l);
		}
		if (l > r) swap(l, r);
		if (r - 1 < 2) continue;
		++cnt[l + 1];
		--cnt[r];
	}

	for (int i = 0; i < n - 1; i++) {
		cnt[n + 1] += cnt[i];
	}

	for (int i = 1; i < n; i++) {
		res[i] = res[0] - cnt[i];
		for (auto j : adj[i]) {
			res[i] -= abs(i - j);
			res[i] += j + (j < i);
		}
	}

	for (int i = 0; i < n; i++) {
		cout << res[i] << ' ';
	}

	cout << endl;
}
