#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int arr_did[100001];
int arr_weight[100001];
vector<int> varr[100001];
vector<int> parr[100001];
int m_search(int i) {
	int N = 1;
	for (int x : parr[i]) N += m_search(x);
	arr_did[i] = N;
	return N;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, R, Q, x, y, qsize, vsize;
	queue<int> q;
	cin >> N >> R >> Q;
	for (int i = 0; i < N - 1; i++) {
		cin >> x >> y;
		varr[x].push_back(y);
		varr[y].push_back(x);
	}
	q.push(R);
	arr_did[R] = 1;
	qsize = 1;
	while (qsize) {
		while (qsize--) {
			x = q.front();
			q.pop();
			vsize = varr[x].size();
			if (vsize) {
				for (int i : varr[x]) {
					if (arr_did[i]) continue;
					q.push(i);
					arr_did[i] = 1;
					parr[x].push_back(i);
				}
			}
		}
		qsize = q.size();
	}
	m_search(R);
	while (Q--) {
		cin >> x;
		cout << arr_did[x]<<"\n";
	}
}