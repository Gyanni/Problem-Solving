// Author : Gyanni
// Date : 2022-05-31

#include <bits/stdc++.h>

using namespace std;

long long n, x;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	cin >> n >> x;

	queue<long long> q;
	map<long long, int> dist;
	q.push(x);
	dist[x] = 0;

	while (!q.empty()) {

		long long cur = q.front();
		q.pop();

		string curstr = to_string(cur);
		int k = curstr.size();

		if (k == n) {
			cout << dist[cur] << "\n";
			return 0;
		}

		for (int i = 0; i < k; i++) {
			if (curstr[i] == '1' || curstr[i] == '0') continue;

			long long nxt = cur * (curstr[i] - '0');

			if (!dist[nxt]) {
				dist[nxt] = dist[cur] + 1;
				q.push(nxt);
			}
		}
	}

	cout << -1 << "\n";
}

// BFS, shortest path
// 1700
