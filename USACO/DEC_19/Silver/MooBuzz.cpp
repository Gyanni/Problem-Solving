#include <bits/stdc++.h>

using namespace std;

int md, re, ans = -1;

int main() {
	ios_base::sync_with_stdio();
	int n; cin >> n;

	md = n / 8; re = n % 8;
	ans += md * 15;

	if (re == 1 || re == 2) ans += (re + 1);
	else if (re == 3) ans += 5;
	else if (re == 4 || re == 5) ans += (re + 4);
	else if (re == 6) ans += 12;
	else if (re == 7) ans += 14;

	cout << ans << "\n";
}

# Math
