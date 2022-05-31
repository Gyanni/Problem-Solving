// Author : Gyanni
// Date : 2022-05-31

#include <bits/stdc++.h>

using namespace std;

int n;
int a[110], b[110], c[110], d[110];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			c[i] = a[i];
		}

		for (int i = 0; i < n; i++) {
			cin >> b[i];
			d[i] = b[i];
		}

		sort(c, c + n); sort(d, d + n);

		int cnt = 0;
		bool flag = true;
		vector<pair<int, int>> p;
		for (int i = 0; i < n; i++) {
			if (a[i] == c[i] && b[i] == d[i]) continue;
			
			for (int j = i + 1; j < n; j++) {
				if (a[i] == c[j] && b[i] == d[j]) {
					cnt++;
					swap(c[i], c[j]);
					swap(d[i], d[j]);
					p.push_back({ j, i });
					break;
				}

				if (j == n - 1) flag = false;
			}
		}

		if (!flag) {
			cout << -1 << "\n";
			continue;
		}

		cout << cnt << "\n";
		for (int i = p.size() - 1; i >= 0; i--) {
			cout << p[i].first + 1 << " " << p[i].second + 1 << "\n";
		}
	
	}
}

// sorting, simple implementation
// 1200
