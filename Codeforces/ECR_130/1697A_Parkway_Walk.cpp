// Author : Gyanni
// Date : 2022-06-14

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t; cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		int sum = 0;

		for (int i = 0; i < n; i++) {
			int tmp; cin >> tmp;
			sum += tmp;
		}

		cout << (sum >= m ? sum - m : 0) << "\n";
	}
}

// 800
// simple implementation
