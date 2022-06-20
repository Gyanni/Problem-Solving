// Author : Gyanni
// Date : 2022-06-20

#include <bits/stdc++.h>

using namespace std;

int n;
string str= "";

char query1(int idx) {

	char tmp;
	cout << "? 1 " << idx << "\n";
	cout.flush();
	cin >> tmp;
	
	return tmp;
}

int query2(int le, int ri) {
	
	int tmp;
	cout << "? 2 " << le << " " << ri << "\n";
	cout.flush();
	cin >> tmp;

	return tmp;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	cin >> n;
	vector<vector<int>> v(n + 1);

	str.push_back(query1(1));
	v[0] = { 1 };
	for (int i = 1; i < n; i++) {
		int cur = query2(1, i + 1);

		if (cur > v[i - 1][0]) str.push_back(query1(i + 1));

		else {
			map<char, int> mp;
			for (int j = 0; j < str.size(); j++) mp[str[j]] = j;

			vector<int> last;
			for (auto k : mp) last.push_back(k.second);

			sort(last.begin(), last.end());

			int le = 0;
			int ri = last.size();

			while (ri > le + 1) {
				int mi = (ri + le) / 2;
				if (query2(last[mi] + 1, i + 1) == v[i - 1][last[mi]]) le = mi;
				else ri = mi;
			}
			str.push_back(str[last[le]]);
		}

		v[i].resize(i + 1);
		set<char> s;

		for (int j = i; j >= 0; j--) {
			s.insert(str[j]);
			v[i][j] = s.size();
		}
	}

	cout << "! " << str << "\n";
	cout.flush();
}

// interactive, binary search
// 1900
