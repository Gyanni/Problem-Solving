// Author : Gyanni
// Date : 2022-07-28

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll n, q, tmp;
ll test[100010];
bool chk[100010];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	ll t; cin >> t;
	while (t--) {
		cin >> n >> q;
		for (int i = 0; i < n; i++) cin >> test[i];
		memset(chk, false, sizeof(chk));

		tmp = 0;
		for (int i = n - 1; i >= 0; i--) {
			if (tmp < test[i] && tmp < q) {
				tmp++;
				chk[i] = true;
			}

			else if (tmp >= test[i]) chk[i] = true;
		}

		for (int i = 0; i < n; i++) {
			if (chk[i]) cout << 1;
			else cout << 0;
		}

		cout << "\n";
	}
}

// greedy
// 1600
