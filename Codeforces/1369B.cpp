#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;

	while (t--) {
		int n; cin >> n;
		string query, ans; cin >> query;
		int chk = 0;

		for (int i = 1; i < query.size(); i++) {
			if (query[i] < query[i - 1]) chk = 1;
		}

		if (!chk) {
			cout << query << "\n";
			continue;
		}

		for (int i = 0; i < query.size(); i++) {
			if (query[i] == '1') break;
			ans.push_back('0');
		}
		ans.push_back('0');
		for (int i = query.size() - 1; i >= 0; i--) {
			if (query[i] == '0') break;
			ans.push_back('1');
		}
		
		cout << ans << "\n";
	}

	return 0;
}

// 결국 감소하는 모든 부분수열이 한글자로 귀결된다는 규칙만 파악하면 쉽게 구현 가능
