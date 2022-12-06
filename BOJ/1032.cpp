#include <bits/stdc++.h>

/**
 * 백준 1032
 * 명령 프롬프트
 * 2022-12-06
 * 구현
 */

using namespace std;
using ll = long long;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	ll t; cin >> t;

	string temp; cin >> temp;
	t--;
	while (t--) {
		string tmp;
		cin >> tmp;
		for (int i = 0; i < tmp.length(); i++) {
			if (temp[i] != tmp[i]) temp[i] = '?';
		}
	}

	cout << temp << "\n";
}
