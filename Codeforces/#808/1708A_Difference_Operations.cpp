#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll n;
ll num[200];
bool isok = true;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	ll t; cin >> t;

	while (t--) {
		isok = true;
		cin >> n;
		cin >> num[0];

		for (int i = 1; i < n; i++) {
			cin >> num[i];
			if (num[i] % num[0]) {
				isok = false;
			}
		}

		if (isok) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}
}
