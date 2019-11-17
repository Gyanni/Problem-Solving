#include <bits/stdc++.h>
using namespace std;

int N, fac;
long double sum;
pair<int, int> maps[10];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> maps[i].first >> maps[i].second;
	}
	
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j < i; j++) {
			sum += sqrt(pow(maps[i].first - maps[j].first, 2) + pow(maps[i].second - maps[j].second, 2));
		}
	}

	sum *= 2; sum /= N;
	cout << fixed;
	cout.precision(7);
	cout << sum << "\n";
}
