// Author : Gyanni
// Date : 2022-06-23

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	int t; cin >> t;
	while (t--) {
		int mxn = -1187654321;
		int mxx = -1, mxy = -1;
		int n, m; cin >> n >> m;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				int tmp; cin >> tmp;
				if (tmp > mxn) {
					mxn = tmp;
					mxx = j; mxy = i;
				}
			}
		}

		int ansx = max(mxx + 1, m - mxx);
		int ansy = max(mxy + 1, n - mxy);

		cout << ansx * ansy << "\n";
	}
	
}

// simple implementation
// 800
