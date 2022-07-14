// Author : Gyanni
// Date : 2022-07-14

#include <bits/stdc++.h>

using namespace std;

int n;
int b[500050];
int le[500050], ri[500050];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		cin >> n;
		vector<vector<int>> v(n + 1);
		for (int i = 1; i <= n; i++) {
			cin >> b[i];

			ri[i] = ((b[i] == 0) ? n : i / b[i]);
			le[i] = i / (b[i] + 1) + 1;
		}

		for (int i = 1; i <= n; i++) {
			v[le[i]].push_back(i);
		}

		vector<int> arr(n + 1, -1);
		set<pair<int, int>> s;
		for (int i = 1; i <= n; i++) {
			for (int j : v[i]) {
				s.emplace(ri[j], j);
			}
			assert(!s.empty());
			arr[s.begin()->second] = i;
			s.erase(s.begin());
		}

		for (int i = 1; i <= n; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
}

// sorting, greedy
// 1900
