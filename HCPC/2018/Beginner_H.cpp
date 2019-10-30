#include <bits/stdc++.h>
using namespace std;

set<int> s;
int N, ans;

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		s.insert(temp);
	}

	for (int i = 1; i <= N + 1; i++) {
		if (!(s.count(i))) {
			ans = i;
			break;
		}
	}

	cout << ans << endl;
}
