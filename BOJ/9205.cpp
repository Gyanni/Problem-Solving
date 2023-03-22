#pragma GCC system_header

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

pair<ll, ll> maps[100];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll t; cin >> t;
    while(t--) {
        ll k; cin >> k;
        ll x, y; cin >> x >> y;
        bool ans  = false;
        bool visited[100] = {false, };
        
        queue<pair<ll, ll>> q;
        q.push({x, y});

        for (ll i = 0; i < k; i++) {
            cin >> maps[i].first >> maps[i].second;
        }

        ll targetx, targety; cin >> targetx >> targety;

        while(!q.empty()) {
            ll curx = q.front().first;
            ll cury = q.front().second;
            q.pop();

            if (abs(curx - targetx) + abs(cury - targety) <= 1000) {
                ans = true;
                break;
            }

            for (ll i = 0; i < k; i++) {
                if (visited[i]) continue;
                ll nxtx = maps[i].first;
                ll nxty = maps[i].second;
                if (abs(curx - nxtx) + abs(cury - nxty) <= 1000) {
                    q.push({nxtx, nxty});
                    visited[i] = true;
                }
            }
        }

        if (ans) cout << "happy" << endl;
        else cout << "sad" << endl;
    }

    return 0;
}

// TODO: ADD TAGS ABOUT PROBLEM
