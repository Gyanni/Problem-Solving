// Autor : Gyanni

#include <bits/stdc++.h>

using namespace std;

string ticket;
int num[10];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		cin >> ticket;
		for (int i = 0; i < 6; i++) {
			num[i] = ticket[i] - '0';
		}

		int k = num[0] + num[1] + num[2] - num[3] - num[4] - num[5];
		if (k == 0) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}
}

// 800
// simple implementation
