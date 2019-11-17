#include <bits/stdc++.h>
using namespace std;

int N;
string S;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> S;
	if (N % 2 == 0) {
		for (int i = 0; i < (N / 2); i++) {
			if (S[i] != S[i + (N / 2)]) {
				cout << "No" << "\n";
				return 0;
			}
		}
		cout << "Yes" << "\n";
	}
	else 
		cout << "No" << "\n";
}
