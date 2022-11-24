#include <bits/stdc++.h>

/**
 * 백준 11866
 * 요세푸스 문제 0
 * 2022-11-24
 * 구현
 */

using namespace std;
using ll = long long;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	ll n, k; cin >> n >> k;

	queue<ll> q;
	vector<ll> ans;
	for (int i = 1; i <= n; i++) q.push(i);

	ll cnt = 0;
	while (!q.empty()) {
		cnt++; 
		if (cnt == k) {
			ll tmp = q.front();
			q.pop();
			ans.push_back(tmp);
			cnt = 0;
		}

		else {
			ll tmp = q.front();
			q.pop();
			q.push(tmp);
		}
	}

	cout << "<";
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i];
		if (i == ans.size() - 1) break;
		cout << ", ";
	}
	cout << ">" << "\n";

}
