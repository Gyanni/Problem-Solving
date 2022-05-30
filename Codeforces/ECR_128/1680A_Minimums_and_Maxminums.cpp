// Author : Gyanni

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t; cin >> t;
	while (t--) {
		int l1, l2, r1, r2;
		cin >> l1 >> r1 >> l2 >> r2;

		int ans = 0;
		if (max(l1, l2) <= min(r1, r2)) ans = max(l1, l2);
		else ans = l1 + l2;
		cout << ans << "\n";
	}
}

// implementation
// 800
