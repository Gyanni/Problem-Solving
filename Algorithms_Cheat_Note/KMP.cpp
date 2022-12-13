// kmp 알고리즘
// 특정 문맥(size n)속에서 특정 단어를(size m)
// O(nm)이 아닌 O(n + m)의 시간복잡도로 찾아내는 알고리즘

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll pi[1000100];

vector<int> kmp(string t, string p) {
	vector<int> matched;
	ll n = t.size(), m = p.size(), j = 0;

	for (int i = 0; i < n; i++) {
		while (j > 0 && t[i] != p[j]) j = pi[j - 1];

		if (t[i] == p[j]) {
			if (j == m - 1) {
				matched.push_back(i - m + 1);
				j = pi[j];
			}
			else {
				j++;
			}
		}
	}

	return matched;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	string t, p;
	getline(cin, t); getline(cin, p);

	ll n = p.size(); ll j = 0;

	for (ll i = 1; i < n; i++) {

		while (j > 0 && p[i] != p[j]) j = pi[j - 1];

		if (p[i] == p[j]) pi[i] = ++j;
	}

	auto ans = kmp(t, p);
	cout << ans.size() << "\n";
	for (auto i : ans) cout << i + 1 << " ";

}
