#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1000000007;

long long GCD(long long x, long long y) {

	return y ? GCD(y, x % y) : x;

}

long long LCM(long long x, long long y) {

	return x * y / GCD(x, y);

}

long long t, n;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	cin >> t;

	while (t--) {

		cin >> n;

		long long g = 1, ans = 0;
		for (int i = 1; g <= n; i++) {

			g = LCM(i, g);
			if (g > n) break;
			ans += (n / g) % MOD;

		}

		cout << (ans + n) % MOD << "\n";

	}

}

// math, number theory

// number theory 문제는 해답을 찾아보기 보다는 고민을 해서 자기가 찾아내는 것이 훨씬 중요해보임