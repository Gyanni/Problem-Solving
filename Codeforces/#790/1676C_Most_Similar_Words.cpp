//Author : Gyanni

#include <bits/stdc++.h>

using namespace std;

string str[55];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t; cin >> t;
	while (t--) {
		int n, m; cin >> n >> m;
		for (int i = 0; i < n; i++) cin >> str[i];

		int gap = 0;
		int ans = 987654321;

		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				for (int k = 0; k < m; k++) {
					gap += abs(str[i][k] - str[j][k]);
				}
				ans = min(ans, gap);
				gap = 0;
			}
		}

		cout << ans << "\n";
	}
}

// 800
// brute force
