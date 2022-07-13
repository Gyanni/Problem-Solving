// Author : Gyanni
// Date : 2022-07-13

#include <bits/stdc++.h>

using namespace std;

long long n, m;
long long own[200020];

bool chk(long long t) {
	// a : 넘쳐나는 양, b : 더 할 수 있는 양
	long long a = 0, b = 0;

	for (int i = 1; i <= n; i++) {
		if (own[i] < t) b += (t - own[i]) / 2;
		else a += own[i] - t;
	}

	//cout << "#" << t << " " << a << " " << b << "\n";

	if (b >= a) return true;
	return false;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		memset(own, 0, sizeof(own));
		cin >> n >> m;

		for (int i = 0; i < m; i++) {
			int tmp; cin >> tmp;
			own[tmp]++;
		}

		long long le = 1, ri = 500000;
		long long mid = (le + ri) / 2;

		while (le < ri) {
			mid = (le + ri) / 2;
			if (chk(mid)) {
				ri = mid;
			}
			else {
				le = mid + 1;
				mid = (le + ri) / 2;
			}
		}

		cout << mid << "\n";
	}
}

// binary search
// 1400
