// Author : Gyanni
// Date : 2022-07-21

#include <bits/stdc++.h>

using namespace std;

int n, k;
int deck[200020], nxt[200020], sz[200020], ans[200020];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	cin >> n >> k;

	memset(ans, -1, sizeof(ans));

	set<int> table;
	for (int i = 0; i < n; i++) cin >> deck[i];

	for (int i = 0; i < n; i++) {
		auto it = table.upper_bound(deck[i]);
		if (it == table.end()) {
			table.insert(deck[i]);
			nxt[deck[i]] = -1;
			sz[deck[i]] = 1;
		}

		else {
			table.insert(deck[i]);
			nxt[deck[i]] = *it;
			sz[deck[i]] = sz[*it] + 1;
			table.erase(it);
		}

		if (sz[deck[i]] == k) {
			table.erase(deck[i]);
			int cur = deck[i];
			while (cur != -1) {
				ans[cur] = i + 1;
				cur = nxt[cur];
			}
		}
	}

	for (int i = 1; i <= n; i++) cout << ans[i] << "\n";
}

// data structure, implementation
