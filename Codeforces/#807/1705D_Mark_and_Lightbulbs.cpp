// Author : Gyanni
// Date : 2022-07-22

#include <bits/stdc++.h>

using namespace std;

long long n;
long long zo1, zo2, oz1, oz2;
string st1, st2;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		cin >> n >> st1 >> st2;
		long long ans = 0;
		zo1 = zo2 = oz1 = oz2 = 0;

		vector<long long> v1;
		vector<long long> v2;

		for (int i = 1; i < n; i++) {
			if (st1[i - 1] == '1' && st1[i] == '0') {
				oz1++; v1.push_back(i);
			}
			if (st1[i - 1] == '0' && st1[i] == '1') {
				zo1++; v1.push_back(i);
			}
			if (st2[i - 1] == '1' && st2[i] == '0') {
				oz2++; v2.push_back(i);
			}
			if (st2[i - 1] == '0' && st2[i] == '1') {
				zo2++; v2.push_back(i);
			}
		}

		if (st1[0] != st2[0] || st1[n - 1] != st2[n - 1]) {
			cout << -1 << "\n";
			continue;
		}

		if (v1.size() != v2.size()) {
			cout << -1 << "\n";
			continue;
		}

		long long tmp = v1.size();
		for (int i = 0; i < tmp; i++) {
			ans += abs(v1[i] - v2[i]);
		}

		cout << ans << "\n";
	}
}

// implementation
// 1800
