// Author : Gyanni
// Date : 2022-05-30

#include <bits/stdc++.h>

using namespace std;

long long n, m;
long long cards[200020], b[200020];

int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) cin >> cards[i];

		long long sum = 0;
		cin >> m;
		for (int i = 0; i < m; i++) {
			cin >> b[i];
			sum += b[i];
		}

		cout << cards[sum % n] << "\n";
	}
}

// simple implementation
// 800
