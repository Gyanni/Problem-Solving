#include <bits/stdc++.h>
using namespace std;

int N, sum, cur, m, d, ans;

int main() {
	cin >> N;
	sum = N - 2018;
	cur = 2019;
	m = 1;
	d = 13;
	while (sum) {
		if (d % 7 == 4) ans++;
		if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) d += 31;
		else if (m == 2) {
			if (cur % 4 == 0 && cur % 100 != 0 || cur % 400 == 0) d += 29;
			else d += 28;
		}
		else d += 30;
		m++;
		if (m > 12) {
			m = 1;
			cur++;
			sum--;
		}
	}
	cout << ans << "\n";
}
