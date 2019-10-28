#include <bits/stdc++.h>
using namespace std;

int N, rep, avr;
double sum;

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> rep;
		if (rep == 100) {
			sum += 100;
			continue;
		}
		if (rep % 10 == 0) rep += 9;
		if (rep % 10 == 6) rep += 3;
		if (rep >= 60 && rep < 70) rep += 30;
		sum += rep;
	}
	avr = (int)(sum / N + 0.5);

	cout << avr << "\n";
}
