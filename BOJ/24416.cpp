#include <bits/stdc++.h>

/**
 * 백준 24416
 * 알고리즘 수업 - 피보나치의 수
 * 2022-12-06
 * Simple DP
 */

using namespace std;
using ll = long long;

ll tmp[100];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	ll t; cin >> t;

	tmp[1] = tmp[2] = 1;
	for (int i = 3; i < 51; i++) {
		tmp[i] = tmp[i - 1] + tmp[i - 2];
	}

	cout << tmp[t] << " " << t - 2 << "\n";

}
