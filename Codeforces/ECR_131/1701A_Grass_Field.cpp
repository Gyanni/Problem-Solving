#include <bits/stdc++.h>

using namespace std;

int  main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t; cin >> t;
	while (t--) {
		int ones = 0;

		for (int i = 0; i < 4; i++) {
			int tmp; cin >> tmp;
			if (tmp) ones++;
		}

		if (!ones) cout << 0 << "\n";
		else if (ones == 4) cout << 2 << "\n";
		else cout << 1 << "\n";
	}
}
