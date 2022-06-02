// Author : Gyanni
// Date : 2022-06-02

#include <bits/stdc++.h>

using namespace std;

int num[100010];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		int n; cin >> n;
		
		for (int i = 0; i < n; i++) cin >> num[i];

		int cnt = 0;
		for (int i = 1; i < n; i++) {
			if (num[i] < num[i - 1]) {
				cnt++;
				i++;
			}
		}

		cout << cnt << "\n";
	}
}

// 800
// greedy
