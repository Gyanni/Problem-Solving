// Date : 2022-10-17
// Author : Gyanni

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
ll n;
ll num[101], a[101];

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	ll t; cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) cin >> num[i];

		bool flag = true;
		a[0] = num[0];
		for (int i = 1; i < n; i++) {
			if (num[i] != 0 && a[i - 1] >= num[i]) {
				flag = false;
				break;
			}

			a[i] = a[i - 1] + num[i];
		}

		if (!flag) cout << -1 << "\n";
		else {
			for (int i = 0; i < n; i++) {
				cout << a[i] << " ";
			}
			cout << "\n";
		}
	}
}

// greedy
// 1100
