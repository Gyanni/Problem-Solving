// Author : Gyanni
// Date : 2022-05-18

#include <bits/stdc++.h>

using namespace std;

char robots[5][5];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t; cin >> t;
	while (t--) {
		int n, m; cin >> n >> m;
		int minx = 10, miny = 10;
		for (int i = 0; i < n; i++) {
			string tmp; cin >> tmp;
			for (int j = 0; j < m; j++) {
				robots[i][j] = tmp[j];
				if (robots[i][j] == 'R') {
					minx = min(minx, j);
					miny = min(miny, i);
				}
			}
		}

		if (robots[miny][minx] == 'R') cout << "YES" << "\n";
		else cout << "NO" << "\n";

	}
}

// 800
// implementation
