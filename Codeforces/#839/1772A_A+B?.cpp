#include <bits/stdc++.h>

/**
 * 1772A
 * A+B?
 * 2022-12-27
 * simple implementation
 * 800
 */

using namespace std;
using ll = long long;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	ll t; cin >> t;
	while (t--) {
		string tmp; cin >> tmp;
		cout << (tmp[0] - '0') + (tmp[2] - '0') << "\n";
	}
}
