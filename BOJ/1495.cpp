#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll dp[100][1010], v[100];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll n, s, m; cin >> n >> s >> m;

    for (int i = 1; i <= n; i++) cin >> v[i];

    dp[1][s] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (dp[i][j]) {
                if (j + v[i] <= m) dp[i + 1][j + v[i]] = 1;
                if (j - v[i] >= 0) dp[i + 1][j - v[i]] = 1;
            }
        }
    }

    for (int i = m; i >= 0; i--) {
        if (dp[n + 1][i]) {
            cout << i << "\n";
            return 0;
        }
    }

    cout << -1 << "\n";

    return 0;
}

// TODO: ADD TAGS ABOUT PROBLEM
