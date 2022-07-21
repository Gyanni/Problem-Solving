// Author : Gyanni
// Date : 2022-07-21

#include <bits/stdc++.h>

using namespace std;

long long n, ans;
long long dust[200020];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t; cin >> t;
	while (t--) {
		cin >> n;
		ans = 0;
		bool st = false;

		for (int i = 0; i < n - 1; i++) {
			cin >> dust[i];
			if (dust[i]) st = true;
			
			if (!st) continue;

			if (!dust[i]) ans++;

			else ans += dust[i];
		}

		int tmp; cin >> tmp;

		cout << ans << "\n";
	}
}

// simple implementation
// 900
