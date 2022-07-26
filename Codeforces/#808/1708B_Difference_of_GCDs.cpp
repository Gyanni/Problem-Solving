// Author : Gyanni
// Date : 2022-07-26

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll num[100010];
ll n, l, r;
bool isok;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		isok = true;
		cin >> n >> l >> r;

		for (int i = 1; i <= n; i++) {
			ll tmp = (l / i) * i;
			if (tmp < l) tmp += i;
			if (tmp > r) {
				isok = false;
				break;
			}
			num[i] = tmp;
		}

		if (!isok) {
			cout << "NO" << "\n";
			continue;
		}

		cout << "YES" << "\n";
		for (int i = 1; i <= n; i++) {
			cout << num[i] << " ";
		}
		cout << "\n";
	}
}

// simple implementation
// 1100
