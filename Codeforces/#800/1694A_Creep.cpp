// Author : Gyanni
// Date : 2022-06-20

#include <bits/stdc++.h>

using namespace std;

int zero, one;
int nxt;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		cin >> zero >> one;
		nxt = 0;
		if (zero < one) nxt = 1;

		int mn = min(zero, one);
		int mx = max(zero, one);
		for (int i = 0; i < mn; i++) {
			cout << nxt;
			nxt ^= 1;
			cout << nxt;
			nxt ^= 1;
		}

		for (int i = 0; i < mx - mn; i++) cout << nxt;
		cout << "\n";
	}
}

// simple implementation
// 800
