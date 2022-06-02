// Author : Gyanni
// Date : 2022-06-02

#include <bits/stdc++.h>

using namespace std;

int num[101];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		int n; cin >> n;

		int sum = 0;
		bool flag = true;
		for (int i = 0; i < n; i++) {
			cin >> num[i];
			sum += num[i];
		}

		if (sum % n){
			cout << "NO" << "\n";
			continue;
		}

		int mean = sum / n;
		for (int i = 0; i < n; i++) {
			if (num[i] == mean) {
				cout << "YES" << "\n";
				flag = false;
				break;
			}
		}

		if (!flag) continue;

		cout << "NO" << "\n";
	}
}

// 800
// simple implementation
