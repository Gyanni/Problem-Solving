#include <bits/stdc++.h>
using namespace std;
const int MAX = 987654321;

int T, tr;
double a, b, cur, obj;
char st;

int upASearch() {
	if (st == 'A') tr = 0;
	else tr = 1;
	cur = a;

	for (int i = 0; i < 6; i++) {
		if (obj == cur) return tr;
		cur += 20;
		if (cur > 146000) cur = 144000;
		tr++;
	}
	return MAX;
}

int downASearch() {
	if (st == 'A') tr = 0;
	else tr = 1;
	cur = a;

	for (int i = 0; i < 6; i++) {
		if (obj == cur) return tr;
		cur -= 20;
		if (cur < 144000) cur = 146000;
		tr++;
	}
	return MAX;
}

int upBSearch() {
	if (st == 'B') tr = 0;
	else tr = 1;
	cur = b;

	for (int i = 0; i < 6; i++) {
		if (obj == cur) return tr;
		cur += 20;
		if (cur > 146000) cur = 144000;
		tr++;
	}
	return MAX;
}

int downBSearch() {
	if (st == 'B') tr = 0;
	else tr = 1;
	cur = b;

	for (int i = 0; i < 6; i++) {
		if (obj == cur) return tr;
		cur -= 20;
		if (cur < 144000) cur = 146000;
		tr++;
	}
	return MAX;
}

int main() {

	cin >> T;
	while (T--) {
		cin >> a >> b >> st >> obj;
		a *= 1000; b *= 1000; obj *= 1000;
		cout << min({ 6, upASearch(), downASearch(), upBSearch(), downBSearch() }) << "\n";
	}
}
