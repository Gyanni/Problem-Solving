#include <bits/stdc++.h>

/**
 * 백준 17024
 * 죽음의 게임
 * 2022-12-10
 * 구현
 */

using namespace std;
using ll = long long;

ll idx[200];
bool visited[200];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	ll n, k; cin >> n >> k;
	for (int i = 0; i < n; i++) cin >> idx[i];

	ll cur = 0, cnt = 0;
	visited[0] = true;
	while (true) {
		cnt++;
		cur = idx[cur];
		if (cur == k) break;
		if (visited[cur]) {
			cnt = -1;
			break;
		}
		visited[cur] = true;
	}

	cout << cnt << "\n";

}
