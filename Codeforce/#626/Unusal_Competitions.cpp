#include <bits/stdc++.h>

using namespace std;

int n, ans, bleft, bright;
char bra[1000100];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(); cout.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> bra[i];
		if (bra[i] == '(') bleft++;
		else bright++;
	}

	if (bleft != bright) {
		cout << -1 << "\n";
		return 0;
	}

	stack<char> bracket;
	for (int i = 0; i < n; i++) {
		if (bracket.empty()) bracket.push(bra[i]);
		else if (bra[i] == '(' && bracket.top() == ')') {
			bracket.pop();
			ans += 2;
		}
		else if (bra[i] == ')' && bracket.top() == '(') {
			bracket.pop();
		}
		else bracket.push(bra[i]);
	}

	cout << ans << "\n";
	return 0;
}

// Greedy
