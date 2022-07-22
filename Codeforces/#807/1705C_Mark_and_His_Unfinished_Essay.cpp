// Author : Gyanni
// Date : 2022-07-22

#include <bits/stdc++.h>

using namespace std;

long long n, c, q;
char model[200020];
string str;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t; cin >> t;

    while (t--) {
        int n, c, q;
        cin >> n >> c >> q;
        string s; cin >> s;

        vector<long long> l(c), r(c);
        vector<long long> len(c + 1);

        len[0] = n;

        for (int i = 0; i < c; i++) {
            cin >> l[i] >> r[i];
            len[i + 1] = len[i] + (r[i] - l[i] + 1);
        }

        while (q--) {
            long long k;
            cin >> k;
            assert(k <= len[c]);
            for (int i = c - 1; i >= 0; i--) {
                if (k > len[i]) {
                    k = l[i] + (k - len[i] - 1);
                }
            }

            cout << s[k - 1] << '\n';
        }
    }
    return 0;
}

// implementation
// 1400
