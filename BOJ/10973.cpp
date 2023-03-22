#include <bits/stdc++.h>

using namespace std;

using ll = long long;
bool flag = true;
vector<ll> v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll n; cin >> n;
    for (ll i = 0; i < n; i++) {
        ll tmp; cin >> tmp;
        v.push_back(tmp);
    }
    

    for (ll i = n - 1; i > 0; i--) {
        if (v[i - 1] < v[i]) continue;
        for (ll j = i; j < n; j++) {
            if (v[j] < v[i - 1]) {
                swap(v[j], v[i - 1]);
                sort(v.begin() + i, v.end(), greater<>());
                flag = false;
                break;
            }
        }
        if (!flag) break;
    }

    if (flag) {
        cout << -1 << "\n";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}

// TODO: ADD TAGS ABOUT PROBLEM
