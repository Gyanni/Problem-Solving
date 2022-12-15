#include <bits/stdc++.h>

/**
 * 4354
 * 문자열 제곱
 * 2022-12-15
 * kmp
 */

using namespace std;
using ll = long long;

string str;
ll pi[1000100];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	while (true) {
		getline(cin, str);

		if (str[0] == '.') break;

		memset(pi, 0, sizeof(pi));
		ll sz = str.size(), j = 0;

		for (int i = 1; i < sz; i++) {
			
			while (j > 0 && str[i] != str[j]) j = pi[j - 1];

			if (str[i] == str[j]) pi[i] = ++j;
		}

		cout << (sz % (sz - pi[sz - 1]) ? 1 : sz / (sz - pi[sz - 1])) << "\n";
	}
}
