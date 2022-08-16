// Segment Tree 
// 범위 데이터를 반복적으로 처리해야할 때 유용하게 사용 가능하다.
// 대표적인 문제로 수많은 데이터에서 구간합을 구하는 문제가 있다.

#include <bits/stdc++.h>

#define SIZE 200020

using namespace std;
using ll = long long;

ll tree[3 * SIZE], num[SIZE];

// Segment Tree의 값을 초기화
ll init(ll start, ll end, ll node) {
	
	// 데이터값 그대로 (트리의 말단)
	if (start == end) return tree[node] = num[start];

	// start != end 일때 노드의 값을 결정할 수 없기 때문에 자식 노드부터 값 초기화
	ll mid = (start + end) / 2;
	return tree[node] = init(start, mid, node * 2) + init(mid + 1, end, node * 2 + 1);
}

// Segment Tree의 구간합을 구하는 메서드
ll Sum(ll start, ll end, ll node, ll left, ll right) {

	// Tree 노드의 구간이 구해야하는 쿼리 구간의 밖에 있는 경우
	if (left > end || right < start) return 0;

	// 쿼리 구간에 포함되어 있는 경우
	if (left <= start && end <= right) return tree[node];

	// 두 경우 모두 해당되지 않는다면 노드의 구간을 한 번 더 나누어 확인
	ll mid = (start + end) / 2;
	return Sum(start, mid, 2 * node, left, right) + Sum(mid + 1, end, 2 * node + 1, left, right);
}

// 특정 원소값이 수정되어서 Segment Tree도 수정해야 할 때 사용하는 메서드
// diff : 원래의 값가 수정될 값의 차이
 void Update(ll start, ll end, ll node, ll idx, ll diff) {

	// 수정되는 원소의 index가 범위 밖에 있다면 건너뜀
	if (idx < start || idx > end) return;

	tree[node] += diff;

	if (start == end) return;

	ll mid = (start + end) / 2;
	Update(start, mid, node * 2, idx, diff);
	Update(mid + 1, end, node * 2 + 1, idx, diff);
}

// 구간 쿼리값을 구하거나 수정할때마다 O(logn)의 시간복잡도로 처리 가능하다.
