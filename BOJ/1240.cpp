#pragma GCC system_header

#include <bits/stdc++.h>

using namespace std;

using ll = long long;
ll n, m;
ll adj[1001][1001];
ll dis[1001][1001];
bool visited[1001];

void dfs(ll cur, ll start, ll dist) {
    for (ll i = 1; i <= n; i++) {
        if (adj[cur][i] == 0 || visited[i]) continue;
        visited[i] = true;
        dis[start][i] = dist + adj[cur][i];
        dfs(i, start, dist + adj[cur][i]);
        visited[i] = false;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;

    for (ll i = 0; i < n - 1; i++) {
        ll tmp1, tmp2, dist; cin >> tmp1 >> tmp2 >> dist;
        adj[tmp1][tmp2] = dist;
        adj[tmp2][tmp1] = dist;
    }
    
    visited[1] = true;
    for (int i = 1; i <= n; i++) {
        visited[i] = true;
        dfs(i, i, 0);
        visited[i] = false;
    }

    for (ll i = 0; i < m; i++) {
        ll tmp1, tmp2; cin >> tmp1 >> tmp2;
        cout << dis[tmp1][tmp2] << endl;
    }

    return 0;
}

// TODO: ADD TAGS ABOUT PROBLEM
