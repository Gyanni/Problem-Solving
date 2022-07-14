// Author : Gyanni
// Date : 2022-07-14

#include <bits/stdc++.h>

using  namespace std;

long long n;
long long pre, ans;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t; cin >> t;
	while (t--) {
		pre = 0; ans = 0;
		cin >> n;

		for (int i = 0; i < n; i++) {
			long long tmp; cin >> tmp;
			if (!pre && tmp > 0) ans++;
			pre = tmp;
		}

		if (ans >= 2) ans = 2;
		cout << ans << "\n";
	}
}

// simple implementation
// 900
