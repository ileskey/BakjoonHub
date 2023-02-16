#include<iostream>
#include<queue>
using namespace std;
int arr[101] = { 0, };
int arr2[101] = { 0, };
int func() {
	int curr, temp, cnt, dice;
	queue<pair<int, int>> q;
	q.push({ 1, 0 });
	while (1) {
		curr = q.front().first;
		cnt = q.front().second;
		q.pop();
		if (curr == 100) return cnt;
		else {
			dice = 1;
			while (dice < 7) {
				temp = curr + dice;
				dice++;
				if (arr[temp]) temp = arr[temp];
				if (temp > 100|| arr2[temp]) continue;
				q.push({ temp, cnt + 1 });
				arr2[temp]++;
			}
		}

	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M, a;
	cin >> N >> M;
	for (int b = 0; b < N + M; b++) {
		cin >> a;
		cin >> arr[a];
	}
	cout << func();
}