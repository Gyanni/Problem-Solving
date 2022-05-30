// Author : Gyanni
// Date : 2022-05-30

#include <bits/stdc++.h>

using namespace std;

int n, m, mx1, mx2;
int a[55], b[55];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t; cin >> t;
	while (t--) {
		cin >> n;
		mx1 = 0; mx2 = 0;

		for (int i = 0; i < n; i++) {
			cin >> a[i];
			mx1 = max(mx1, a[i]);
		}

		cin >> m;
		for (int i = 0; i < m; i++) {
			cin >> b[i];
			mx2 = max(mx2, b[i]);
		}

		if (mx1 > mx2) cout << "Alice\nAlice\n";
		else if (mx1 < mx2) cout << "Bob\nBob\n";
		else cout << "Alice\nBob\n";
	}
}

// simple implementation
// 800
