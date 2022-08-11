// Author : Gyanni
// Date : 2022-08-11

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll n, tmp;
ll nxt[10];
bool visited[10];
bool flag;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	ll t; cin >> t;

	while (t--) {
		cin >> n;

		flag = true;
		memset(nxt, 0, sizeof(nxt));
		memset(visited, false, sizeof(visited));

		for (int i = 1; i <= 3; i++) {
			cin >> nxt[i];
			visited[i] = true;
		}

		tmp = n;

		ll k = 3;
		while (k--) {
			tmp = nxt[tmp];
			if (k == 0) break;
			if (tmp == 0 && k > 0) flag = false;
		}

		if (!flag) cout << "NO" << "\n";
		else cout << "YES" << "\n";
	}
}

// simple implementation
// 800
