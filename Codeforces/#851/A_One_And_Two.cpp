#pragma GCC system_header

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll cnt, cnt2;
ll num[1010];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll t; cin >> t;
    while (t--)
    {
        cnt = cnt2 = 0;
        ll n; cin >> n;
        for (ll i = 1; i <= n; i++) {
            cin >> num[i];
            if (num[i] == 2) cnt++;
        }

        if (cnt % 2) {
            cout << -1 << endl;
            continue;
        }

        cnt /= 2;

        for (int i = 1; i <= n; i++)
        {
            if (num[i] == 2) cnt2++;

            if (cnt2 == cnt) {
                cout << i << endl;
                break;
            }
        }
        
        
    }

    return 0;
}
// TODO: ADD TAGS ABOUT THE PROBLEM