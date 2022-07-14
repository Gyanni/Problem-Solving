// Author : Gyanni
// Date : 2022-07-14

#include <bits/stdc++.h>

using  namespace std;

long long n, z;
long long ans;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t; cin >> t;
	while (t--) {
		cin >> n >> z;
		ans = 0;

		for (int i = 0; i < n; i++) {
			long long tmp; cin >> tmp;
			ans = max(ans, tmp | z);
		}

		cout << ans << "\n";
	}
}

// simple implemetation
// 800
