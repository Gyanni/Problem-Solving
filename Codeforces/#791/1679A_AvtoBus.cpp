// Author : Gyanni
// Date : 2022-05-24

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		unsigned long long n; cin >> n;
		if (n % 2 || n == 2) {
			cout << -1 << "\n";
			continue;
		}

		n /= 2;

		cout << n / 3 + (n % 3 ? 1 : 0) << " " << n / 2 << "\n";
	}
}

// 900
// simple implementation
