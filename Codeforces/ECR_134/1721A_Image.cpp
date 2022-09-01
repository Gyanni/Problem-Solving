// Author : Gyanni
// Date : 2022-09-01

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll cnt[30];
ll ans;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	ll t; cin >> t;
	while (t--) {
		string tmp; 
		ans = -1;
		memset(cnt, 0, sizeof(cnt));

		for (int i = 0; i < 2; i++) {
			cin >> tmp;
			for (int j = 0; j < 2; j++) {
				cnt[tmp[j] - 'a']++;
			}
		}

		for (int i = 0; i < 30; i++) {
			if (cnt[i] == 4) ans = 0;

			else if (cnt[i] == 3) ans = 1;

			else if (cnt[i] == 2) {
				for (int j = i + 1; j < 30; j++) {
					if (cnt[j] == 2) ans = 1;
				}
				if (ans != 1) ans = 2;
			}
		}

		if (ans == -1) ans = 3;

		cout << ans << "\n";
	}
}

// Solution with (Set) Data Structure 

/*
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        s1 += s2;
        cout << set<char>(s1.begin(), s1.end()).size() - 1 << endl;
    }
} 
*/

// simple implementation, set
// 800
