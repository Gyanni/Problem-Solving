#include <bits/stdc++.h>

using namespace std;

ll ddr[5][5][100010], arr[100010];
ll tmp;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    ll i = 0;
    while (tmp != 0) {
        cin >> tmp;
        arr[i] = tmp;
        i++;
    }

    for (int j = 1; j < 5; j++) {
        for (int k = 1; k < 5; k++) {
            ddr[j][k][1] = 2;
        }
    }

    

    return 0;
}

// TODO: ADD TAGS ABOUT PROBLEM
