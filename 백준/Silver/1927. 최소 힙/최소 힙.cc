#include<iostream>
#include<vector>
using namespace std;
vector<int> v;
int tree[100000];
int cnt;
void push(int x) {
	int idx, tmp;
	tree[++cnt] = x;
	idx = cnt;
	while (idx > 1) {
		if (tree[idx] > tree[idx / 2]) return;
		tmp = tree[idx / 2];
		tree[idx / 2] = tree[idx];
		tree[idx] = tmp;
		idx /= 2;
	}
}
void pop() {
	if (!cnt) {
		v.push_back(0);
		return;
	}
	v.push_back(tree[1]);
	tree[1] = tree[cnt--];
	int idx = 1, idx2 = 2, tmp;
	while (idx2 <= cnt) {
		if (idx2 + 1 <= cnt && tree[idx2 + 1] < tree[idx2]) idx2++;
		if (tree[idx] > tree[idx2]) {
			tmp = tree[idx];
			tree[idx] = tree[idx2];
			tree[idx2] = tmp;
			idx = idx2;
			idx2 = idx * 2;
		}
		else break;
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, x;
	cin >> N;
	while (N--) {
		cin >> x;
		if (x) push(x);
		else pop();
	}
	for (int i : v)cout << i << "\n";
}