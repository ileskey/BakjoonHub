#include<iostream>
#include<vector>
#include<queue>
#include<list>
using namespace std;
list<pair<int, int>> arr[100001];
int arr2[100001] = { 0, 1 };
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, inA, inB, n = 1, qsize, t;
	queue<int> q;
	cin >> N;
	for (int i = 1; i < N; i++) {
		cin >> inA >> inB;
		arr[inA].push_back(make_pair(inA, inB));
		arr[inB].push_back(make_pair(inB, inA));
	}
	q.push(1);
	while (!q.empty()) {
		qsize = q.size();
		while (qsize--) {
			t = q.front();
			q.pop();
			for (pair<int, int>a : arr[t]) {
				if (arr2[a.second]) continue;
				arr2[a.second] = a.first;
				q.push(a.second);
			}
		}
	}
	for (int i = 2; i <= N; i++) {
		cout << arr2[i] << "\n";
	}
}