#include <bits/stdc++.h>

using namespace std;

bool maps[10][10];

int search(int n, int taken[]) {
	int fi = -1;
	for (int i = 0; i < n; i++) {
		if (!taken[i]) {
			fi = i;
			break;
		}
	}
	if (fi == -1) {
		return 1;
	}

	int ret = 0;
	for (int i = fi + 1; i < n; i++) {
		if (!taken[i] && maps[fi][i]) {
			taken[i] = taken[fi] = 1;
			ret += search(n, taken); 
			taken[i] = taken[fi] = 0;
		}
	}
	return ret;
}

int solve() {
	int n, m, taken[10] = { 0, };
	cin >> n >> m;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			maps[i][j] = 0;
		}
	}

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		maps[a][b] = maps[b][a] = 1;
	}
	
	return search(n, taken);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		cout << solve() << "\n";
	}
}
