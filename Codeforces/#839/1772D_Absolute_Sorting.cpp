#include <bits/stdc++.h>

/**
 * 1772D
 * Absolute Sorting
 * 2022-12-29
 * math
 */

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int j = 0; j < n; j++)
            cin >> a[j];
        int mn = 0, mx = int(1e9);
        for(int j = 0; j + 1 < n; j++)
        {
            int x = a[j];
            int y = a[j + 1];
            int midL = (x + y) / 2;
            int midR = (x + y + 1) / 2;
            if(x < y)
                mx = min(mx, midL);
            if(x > y)
                mn = max(mn, midR);
        }
        if(mn <= mx) cout << mn << endl;
        else cout << -1 << endl;
    }
}
