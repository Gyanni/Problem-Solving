#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll maps[1030][1030], dp[1030][1030];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> maps[i][j];
            if (i > 0) dp[i][j] += dp[i - 1][j];
            if (j > 0) dp[i][j] += dp[i][j - 1];
            if (i > 0 && j > 0) dp[i][j] -= dp[i - 1][j - 1];
            dp[i][j] += maps[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        ll x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        ll res = dp[x2][y2];
        if (x1 > 0) res -= dp[x1 - 1][y2];
        if (y1 > 0) res -= dp[x2][y1 - 1];
        if (x1 > 0 && y1 > 0) res += dp[x1 - 1][y1 - 1];
        cout << res << "\n";
    }

    return 0;
}

// TODO: ADD TAGS ABOUT PROBLEM
