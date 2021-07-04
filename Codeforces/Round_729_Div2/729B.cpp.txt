#include bitsstdc++.h

using namespace std;

long long t, n, a, b, base;
bool flag;

int main() {

	ios_basesync_with_stdio(0);
	cin.tie(NULL);

	cin  t;

	while (t--) {

		cin  n  a  b;
		flag = false; base = 1;

		if (a == 1) {

			if ((n - 1) % b == 0) 
				flag = true;

		}

		else {

			while (base = n) {

				if ((n-base) % b == 0) {

					flag = true;
					break;

				}

				base = base  a;

			}
		}

		if (flag) cout  Yes  n;
		else cout  No  n;

	}

	return 0;

}

// math, number theory

// number theory 연습 필요