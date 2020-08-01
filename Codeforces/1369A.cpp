#include <bits/stdc++.h>
using namespace std;

int n, num;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;
		if (num % 4) cout << "NO" << "\n";
		else cout << "YES" << "\n";
	}

	return 0;
}

// 도형의 규칙을 찾으면 바로 풀리는 쉬운 문제
