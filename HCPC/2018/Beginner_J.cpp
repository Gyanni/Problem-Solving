#include <bits/stdc++.h>
using namespace std;
const long long MAX = 100030001;

int N, L;
long long dp[301][301];

long long countBall(int N, int L) {
	if (N == 0) return dp[N][L] = 1;
	if (L == 0) return dp[N][L] = 0;

	if (dp[N][L] != -1) return dp[N][L];
	
	dp[N][L] = 0;
	for (int i = 0; i < N; i++) {
		dp[N][L] += countBall(i, L - 1) * countBall(N - 1 - i, L - 1);
		dp[N][L] %= MAX;
	}
	return dp[N][L];
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> L;
	memset(dp, -1, sizeof(dp));
	cout << (countBall(N, L) - countBall(N, L - 1) + MAX) % MAX << "\n";
}
