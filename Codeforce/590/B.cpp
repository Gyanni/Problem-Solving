#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, rep = 0;
	cin >> n >> k;

	queue<int> q;
	set<int> s;

	for (int i = 0; i < n; i++) {
		int now;
		cin >> now;
		if (!s.count(now)) {
			q.push(now);
			s.insert(now);
			if (q.size() > k) {
				s.erase(q.front());
				q.pop();
			}
		}
	}

	vector<int> res;
	while (!q.empty()) {
		res.push_back(q.front());
		q.pop();
	}
	reverse(res.begin(), res.end());
	cout << res.size() << "\n";
	for (auto it : res) cout << it << " ";
	cout << "\n";
}