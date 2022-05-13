// Author : Gyanni

#include <bits/stdc++.h>

using namespace std;

int n, q;
int num[150050];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t; cin >> t;
	while (t--) {
		cin >> n >> q;
		for (int i = 0; i < n; i++) cin >> num[i];
		sort(num, num + n, greater<int>());
		for (int i = 1; i < n; i++) {
			num[i] += num[i - 1];
		}

		for (int i = 0; i < q; i++) {
			int temp; cin >> temp;
			int ans = lower_bound(num, num + n, temp) - num + 1;
			if (ans > n) {
				cout << -1 << "\n";
				continue;
			}
			cout << ans << "\n";
		}
	}
}

// 1100
// binary search, greedy
