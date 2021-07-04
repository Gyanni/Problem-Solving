#include <bits/stdc++.h>

using namespace std;

int T, N, f, s;

int main() {

	cin >> T;

	while (T--) {
		cin >> N; f = 0; s = 0;
		for (int i = 0; i < 2 * N; i++) {
			int temp; cin >> temp;
			if (temp % 2) f++;
			else s++;
		}

		if (f == s) cout << "Yes" << "\n";
		else cout << "No" << "\n";
	}

}

// math