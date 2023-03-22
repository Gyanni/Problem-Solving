#include <bits/stdc++.h>

using namespace std;

using ll = long long;
ll a[1110], jump[1110];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        jump[i] = 987654321;
    }

    jump[n - 1] = 0;
    
    for (int i = n - 2; i >= 0; i--) {
        for (int j = i + a[i]; j > i; j--) {
            if (j >= n) continue;
            jump[i] = min(jump[j] + 1, jump[i]);
        }
    }

    if (jump[0] == 987654321) {
        cout << -1 << "\n";
        return 0;
    }
    
    cout << jump[0] << "\n";

    return 0;
}

// TODO: ADD TAGS ABOUT PROBLEM
