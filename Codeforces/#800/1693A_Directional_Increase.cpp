// Author : Gyanni
// Date : 2022-06-21

#include <bits/stdc++.h>

using namespace std;

int n;
long long tmp;
long long arr[200020];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t; cin >> t;
	

	while (t--) {
		long long total = 0;
		bool flag = false;
		bool flag2 = false;
		cin >> n;

		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		for (int i = n - 1; i >= 0; i--) {

			total += arr[i];
			if (arr[i]) flag2 = true;
			if (i == 0) flag2 = false;
			if (total >= 0 && flag2) flag = true;
		}

		if (flag || total != 0) cout << "No" << "\n";
		else cout << "Yes" << "\n";

	}
}

// greedy
// 1300
