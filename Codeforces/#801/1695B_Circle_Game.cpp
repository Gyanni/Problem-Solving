// Author : Gyanni
// Date : 2022-06-23

#include <bits/stdc++.h>

using namespace std;

int num[55];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;

		bool isJoeWin = false;
		int mnnum = 1198765432;
		int mnidx = -1;

		for (int i = 0; i < n; i++) {

			cin >> num[i];

			if (num[i] < mnnum) {
				mnnum = num[i];
				mnidx = i;
			}
		}

		if ((n % 2 == 0) && (mnidx % 2 == 0)) {
			isJoeWin = true;
		}

		if (isJoeWin) cout << "Joe" << "\n";
		else  cout << "Mike" << "\n";
	
	}
	
}

// simple implementation
// 1000
