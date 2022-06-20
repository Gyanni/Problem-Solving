// Author : Gyanni
// Date : 2022-06-20

#include <bits/stdc++.h>

using namespace std;

long long ans, n;
string q;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		ans = 0;
		cin >> n >> q;

		ans += n;
		for (int i = 0; i < n - 1; i++) {
			if (q[i] != q[i + 1]) ans += i + 1;
		}

		cout << ans << "\n";
	}
}

// simple implementation
// 1200
