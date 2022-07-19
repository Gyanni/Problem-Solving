// Author : Gyanni
// Date : 2022-07-19

#include <bits/stdc++.h>

using namespace std;

int n, x, y, z;
int math[2000], eng[2000];

typedef struct stduent {
	int math;
	int eng;
	int total;
	int num;
}Student;

Student tmp;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	cin >> n >> x >> y >> z;

	vector<Student> st;
	vector<int> ans;

	for (int i = 0; i < n; i++) cin >> math[i];
	for (int i = 0; i < n; i++) {
		cin >> eng[i];
		tmp.math = math[i]; tmp.eng = eng[i];
		tmp.total = tmp.math + tmp.eng;
		tmp.num = i;
		st.push_back(tmp);
	}

	sort(st.begin(), st.end(), [](Student a, Student b) {
		if (a.math == b.math) return a.num > b.num;
		else return a.math < b.math;
		});


	for (int i = 0; i < x; i++) {
		ans.push_back(st.back().num);
		st.pop_back();
	}

	sort(st.begin(), st.end(), [](Student a, Student b) {
		if (a.eng == b.eng) return a.num > b.num;
		else return a.eng < b.eng;
		});

	for (int i = 0; i < y; i++) {
		ans.push_back(st.back().num);
		st.pop_back();
	}

	sort(st.begin(), st.end(), [](Student a, Student b) {
		if (a.total == b.total) return a.num > b.num;
		else return a.total < b.total;
		});

	for (int i = 0; i < z; i++) {
		ans.push_back(st.back().num);
		st.pop_back();
	}

	sort(ans.begin(), ans.end());

	for (auto k: ans) {
		cout << k + 1 << "\n";
	}

}

// sorting
