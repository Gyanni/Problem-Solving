// Author : Gyanni
// Date : 2022-07-19

#include <bits/stdc++.h>

using namespace std;

string st;
int oc[30];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	cin >> st;

	int len = st.length();

	for (int i = 0; i < len; i++) {
		oc[st[i] - 'a']++;
	}

	for (int i = 0; i < 30; i++) {
		if (oc[i] == 1) {
			char ans = i + 'a';
			cout << ans << "\n";
			return 0;
		}
	}

	cout << -1 << "\n";

}

// simple implementation
