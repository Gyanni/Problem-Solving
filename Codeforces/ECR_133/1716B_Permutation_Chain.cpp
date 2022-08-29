// Author : Gyanni
// Date : 2022-08-29

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll arr[101];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	ll t; cin >> t;
	while (t--) {
		ll n; cin >> n;

		for (int i = 0; i < n; i++) arr[i] = i + 1;
		ll tmp = n;
		cout << tmp << "\n";
		while (tmp > 1) {
			for (int i = 0; i < n; i++) cout << arr[i] << " ";
			cout << "\n";
			swap(arr[tmp - 1], arr[tmp - 2]);
			tmp--;
		}

		for (int i = 0; i < n; i++) cout << arr[i] << " ";
		cout << "\n";
	}
}

// brute force
// 800
