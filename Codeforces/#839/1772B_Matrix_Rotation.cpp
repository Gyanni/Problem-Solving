#include <bits/stdc++.h>

/**
 * 1772B
 * Matrix Rotation
 * 2022-12-27
 * brute force
 */

using namespace std;
using ll = long long;

ll sm, smx, smy;
ll mx, mxx, mxy;
ll mat[2][2];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	ll t; cin >> t;
	while (t--) {
		sm = 987654321; mx = 0;
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				cin >> mat[i][j];
				if (mat[i][j] > mx) {
					mx = mat[i][j];
					mxx = i; mxy = j;
				}
				if (mat[i][j] < sm) {
					sm = mat[i][j];
					smx = i; smy = j;
				}
			}
		}

		if (smx == mxx || mxy == smy) cout << "NO" << "\n";
		else cout << "YES" << "\n";

	}
}
