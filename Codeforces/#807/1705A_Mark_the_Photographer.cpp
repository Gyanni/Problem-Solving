// Author : Gyanni
// Date : 2022-07-21

#include <bits/stdc++.h>

using namespace std;

int n, x;
int height[333];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t; cin >> t;
	while (t--) {
		cin >> n >> x;

		for (int i = 0; i < 2 * n; i++) {
			cin >> height[i];
		}

		sort(height, height + 2 * n);

		bool corr = true;
		for (int i = 0; i < n; i++) {
			if (height[i] + x > height[i + n]) {
				corr = false;
				break;
			}
		}

		if (corr) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}
}

// simple implementation
// 800
