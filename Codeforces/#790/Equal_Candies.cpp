// Author : Gyanni
#include <bits/stdc++.h>

using namespace std;

int num[55];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		int n; cin >> n;
		int mn = 987654321;
		int ans = 0;

		for (int i = 0; i < n; i++) {
			cin >> num[i];
			mn = min(mn, num[i]);
		}

		for (int i = 0; i < n; i++) {
			ans += (num[i] - mn);
		}

		cout << ans << "\n";
	}
}

// 800
// simple implementation
