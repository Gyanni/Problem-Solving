#include <bits/stdc++.h>
using namespace std;

string name, cname;
string sex, csex;
int dist, num, cd, cdist, n;
bool chk;
set<string> s;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> name >> sex >> dist >> num;
	while (num--) {
		cin >> cname >> csex >> cdist;
		chk = true;

		if (sex == "M" || sex == "F") {
			if (csex != sex)
				chk = false;
		}

		if (dist < cdist)
			chk = false;

		if (chk) 
			s.insert(cname);
	}
	
	if (s.empty())
		cout << "No one yet" << "\n";

	else {
		for (auto it = s.begin(); it != s.end(); it++)
			cout << *it << "\n";
	}
}
