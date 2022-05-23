// Author : Gyanni
// Date : 2022-05-23

#include <bits/stdc++.h>

using namespace std;

int n;
string str[2];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t; cin >> t;
	while (t--) {
		
		cin >> n >> str[0] >> str[1];
		for (int i = 0; i < 2; i++) {
			while (str[0].back() == '.' && str[1].back() == '.') {
				str[0].pop_back();
				str[1].pop_back();
			}
			reverse(str[0].begin(), str[0].end());
			reverse(str[1].begin(), str[1].end());
		}
		n = str[0].size();

		vector<vector<int>> chips(2, vector<int>(n));
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < n; j++) {
				chips[i][j] = (str[i][j] == '*');
			}
		}

		vector<vector<int>> dp(2, vector<int>(n, 987654321));
		dp[1][0] = chips[0][0];
		dp[0][0] = chips[1][0];
		for (int i = 0; i < n - 1; i++) {
			dp[0][i + 1] = min(dp[0][i + 1], dp[1][i] + 2);
			dp[1][i + 1] = min(dp[1][i + 1], dp[0][i] + 2);
			dp[0][i + 1] = min(dp[0][i + 1], dp[0][i] + 1 + chips[1][i + 1]);
			dp[1][i + 1] = min(dp[1][i + 1], dp[1][i] + 1 + chips[0][i + 1]);
		}

		cout << min(dp[0][n - 1], dp[1][n - 1]) << "\n";
	}
}

// 2000
// dp, greedy
// refer to Tutorial.
