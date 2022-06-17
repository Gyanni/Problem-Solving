// Author : Gyanni
// Date : 2022-06-17

#include <bits/stdc++.h>

using namespace std;

string st1, st2;
int n, cnt1, cnt2;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t; cin >> t;
	while (t--) {
		cin >> n;
		cin >> st1 >> st2;

		cnt1 = 0; cnt2 = 0;
		for (int i = 0; i < n; i++) {
			if (st1[i] == 'b') cnt1++;
		}

		for (int i = 0; i < n; i++) {
			if (st2[i] == 'b') cnt2++;
		}

		if (cnt1 != cnt2) {
			cout << "NO" << "\n";
			continue;
		}

		bool flag = false;
		int i2 = 0;
		for (int i1 = 0; i1 < n; i1++) {
			if (st1[i1] == 'b') continue;

			while (st2[i2] == 'b') i2++;

			if ((st1[i1] != st2[i2]) || (st1[i1] == 'a' && i1 > i2)
				|| (st1[i1] == 'c' && i1 < i2)) {
				cout << "NO" << "\n";
				flag = true;
				break;
			}
			i2++;
		}

		if (flag) continue;
		cout << "YES" << "\n";
	}
}

// greedy
// 1400
