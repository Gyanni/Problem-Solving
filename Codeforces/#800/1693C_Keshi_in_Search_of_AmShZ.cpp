// Author : Gyanni
// Date : 2022-06-23

#include <bits/stdc++.h>

using namespace std;

int cnt[200020], dist[200020];
bool visited[200020];
vector<int> adj[200020];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	int n, m; cin >> n >> m;

	for (int i = 0; i < m; i++) {
		
		int u, v; cin >> u >> v;
		adj[v].push_back(u);
		cnt[u]++;

	}

	fill(dist, dist + n + 1, m);

	dist[n] = 0;
	priority_queue<pair<int, int>> pq;
	pq.push({ -dist[n], n });

	while (!pq.empty()) {
		int curdist = -pq.top().first;
		int curv = pq.top().second;
		pq.pop();

		if (visited[curv]) continue;

		visited[curv] = true;

		for (int v : adj[curv]) {
			if (cnt[v] + dist[curv] < dist[v]) {
				dist[v] = cnt[v] + dist[curv];
				pq.push({ -dist[v], v });
			}
			--cnt[v];
		}
	}

	cout << dist[1] << "\n";
}

// Dijkstra, shortest path
// 2300
