#include <bits/stdc++.h>

using namespace std;

using ll = long long;

bool flag = true;
bool visited[51][51];
ll n, l, r, ans;
ll maps[51][51];
pair<ll, ll> track[3000];
ll dx[4] = {0, 0, 1, -1}, dy[4] = {1, -1, 0, 0};

bool isok(ll x, ll y) {
    return x >= 0 && x < n && y >= 0 && y < n;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> l >> r;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            cin >> maps[i][j];
        }
    }

    while(flag) {
        flag  = false;
        ans++;
        memset(visited, false, sizeof(visited));

        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < n; j++) {
                if (visited[i][j]) continue;

                ll cnt = 1;
                ll total = maps[i][j];
                queue<pair<ll, ll>> q;
                q.push({i, j});

                while(!q.empty()) {
                    ll curx = q.front().first;
                    ll cury = q.front().second;
                    q.pop();

                    for (ll i = 0; i < 4; i++) {
                        ll nxtx = curx + dx[i];
                        ll nxty = cury + dy[i];
                        ll diff = abs(maps[curx][cury] - maps[nxtx][nxty]);

                        if (!isok(nxtx, nxty) || visited[nxtx][nxty]) continue;

                        if (diff >= l && diff <= r) {
                            flag = true;
                            visited[nxtx][nxty] = true;
                            track[cnt++] = {nxtx, nxty};
                            q.push({nxtx, nxty});
                            total += maps[nxtx][nxty];
                        }

                    }
                }

                if (cnt > 1) {
                    ll avg = total / cnt;
                    for (ll i = 1; i <= cnt; i++) {
                        maps[track[i].first][track[i].second] = avg;
                    }
                    memset(track, 0, sizeof(track));
                }
            }
        }
    }
    cout << ans - 1 << endl;
}

// TODO: ADD TAGS ABOUT PROBLEM
