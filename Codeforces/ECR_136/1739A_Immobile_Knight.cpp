// Date : 2022-10-17
// Author : Gyanni

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int n, m;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	ll t; cin >> t;
	while (t--) {
		cin >> n >> m;

		if (n <= 3 && m <= 3) cout << min(n, 2) << " " << min(m, 2) << "\n";
		else cout << n << " " << m << "\n";

	}
}

// simple implementation
// 800
