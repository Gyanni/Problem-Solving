// Author : Gyanni
// Date : 2022-08-17

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll n;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	ll t; cin >> t;
	while (t--) {
		cin >> n;
		if (n > 1) cout << "2 ";
		for (int i = 3; i <= n; i++) cout << i << " ";
		cout << "1 \n";
	}
}

// simple implementation
// 800
