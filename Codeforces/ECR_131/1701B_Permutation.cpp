// Author : Gyanni
// Date : 2022-07-11

#include <bits/stdc++.h>

using namespace std;

int n;

int  main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t; cin >> t;
	while (t--) {
		cin >> n;

		cout << 2 << "\n";

		for (int i = 1; i <= n; i++) {
			if (i % 2 == 0) continue;

			int k = i;
			while (k <= n) {
				cout << k << " ";
				k *= 2;
			}
		}

		cout << "\n";
	}
}

// greedy
// 800
