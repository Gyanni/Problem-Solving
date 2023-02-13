#pragma GCC system_header

#include <bits/stdc++.h>

using namespace std;

using ll = long long;
string inp, a, b;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll t; cin >> t;
    while(t--) {
        cin >> inp;
        bool isEqual = true;
        a = b = "";
        for (int i = 0; i < inp.length(); i++) {
            if (isEqual) {
                ll cur = inp[i] - '0';
                if (cur % 2) isEqual = false;
                a += inp[i] - (cur / 2);
                b += inp[i] - (cur / 2) - (cur % 2);
            }

            else {
                ll cur = inp[i] - '0';
                if (cur % 2) isEqual = true;
                a += inp[i] - (cur / 2) - (cur % 2);
                b += inp[i] - (cur / 2);
            }
        }

        b.erase(0, b.find_first_not_of('0'));
        if (b == "") b += '0';
        cout << a << " " << b << endl;
    }

    return 0;
}

// TODO: ADD TAGS ABOUT PROBLEM
