// Author : Gyanni
// Date : 2022-07-19

#include <bits/stdc++.h>

using namespace std;

long long red[11], blue[11];
long long n, x, y;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	cin >> n >> x >> y;

	red[1] = 0; blue[1] = 1;

	for (int i = 2; i < 11; i++) {
		blue[i] = red[i - 1] + y * blue[i - 1];
		red[i] = x * blue[i] + red[i - 1];
	}

	cout << red[n] << "\n";
}

// simple dp
