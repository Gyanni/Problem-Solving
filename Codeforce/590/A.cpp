#include <bits/stdc++.h>
using namespace std;

int solve() {
	int n, sum = 0;
	int goods[101];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> goods[i];
		sum += goods[i];
	}
	if (sum % n) return sum / n + 1;
	else return sum / n;
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		cout << solve() << "\n";
	}
}