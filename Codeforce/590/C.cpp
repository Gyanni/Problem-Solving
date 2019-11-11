#include <bits/stdc++.h>
using namespace std;

int T, q;
int maps[2][200020];
string s[2];

int main() {
	cin >> T;

	while (T--) {
		int col = 0, row = 0;
		cin >> q;
		memset(maps, 0, sizeof(maps));

		for (int i = 0; i < 2; i++) {
			cin >> s[i];
			for (int j = 0; j < q; j++) 
				maps[i][j] = s[i][j];
		}

		while (row < q) {
			if (maps[col][row] < '3') row++;
			else {
				if (maps[col ^ 1][row] < '3') {
					break;
				}
				else {
					col ^= 1;
					row++;
				}
			}
		}

		if (col == 1 && row == q) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}
}
