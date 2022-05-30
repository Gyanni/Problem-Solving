// Author : Gyanni
// Date : 2022-05-20

#include <bits/stdc++.h>

using namespace std;

string str;
vector<int> oidx;

bool isPossible(int m) {
	int sur = oidx.size() - m;
	int zcnt = str.length() - oidx.size();

	for (int i = 0; i + sur - 1 < oidx.size(); i++) {
		if (!sur) break;
		int l = oidx[i];
		int r = oidx[i + sur - 1];

		zcnt = r - l + 1 - sur;
		if (zcnt <= m) return true;
	}

	return false;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t; cin >> t;

	while (t--) {

		cin >> str;

		oidx.clear();
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '1') oidx.push_back(i);
		}

		int ocnt = oidx.size();

		int le = 0; int ri = ocnt;

		while (ri > le) {
			int mid = (le + ri) / 2;
			if (isPossible(mid)) {
				ri = mid;
			}

			else {
				le = mid + 1;
			}
		}

		cout << le << "\n";
	}
}

// 1600
// binary search
