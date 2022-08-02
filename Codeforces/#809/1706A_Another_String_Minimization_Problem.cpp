// Author : Gyanni
// Date : 2022-08-02

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll n, m;
ll num[55];
bool str[55];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	ll t; cin >> t;
	while (t--) {
		cin >> n >> m;

		memset(str, false, sizeof(str));

		for (int i = 0; i < n; i++) {
			cin >> num[i];
			if (num[i] > m / 2) {
				num[i] = m + 1 - num[i];
			}

			if (str[num[i]]) {
				num[i] = m + 1 - num[i];
				str[num[i]] = true;
			}

			else str[num[i]] = true;
		}

		for (int i = 1; i <= m; i++) {
			if (str[i]) cout << 'A';
			else cout << 'B';
		}

		cout << "\n";
	}
}

// simple implementation
// 800
