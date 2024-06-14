#include<iostream>
#include<queue>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	queue<pair<int, int>> q_air, q_chz;
	int N, M, arr[100][100] = {}, cnt = 0, cnt_air;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 1)q_chz.push(make_pair(i, j));
		}
	}
	q_air.push(make_pair(0, 0));
	int sizeQ, x, y;
	while (true) {
		while (!q_air.empty()) {
			sizeQ = q_air.size();
			while (sizeQ--) {
				x = q_air.front().first;
				y = q_air.front().second;
				arr[x][y]= -1;
				q_air.pop();
				if (x > 0 && arr[x - 1][y] == 0) {
					arr[x - 1][y]--;
					q_air.push(make_pair(x - 1, y));
				}
				if (x < N-1 && arr[x + 1][y] == 0) {
					arr[x + 1][y]--;
					q_air.push(make_pair(x + 1, y));
				}
				if (y > 0 && arr[x][y - 1] == 0) {
					arr[x][y - 1]--;
					q_air.push(make_pair(x, y - 1));
				}
				if (y < M-1 && arr[x][y + 1] == 0) {
					arr[x][y + 1]--;
					q_air.push(make_pair(x, y + 1));
				}
			}
		}
		sizeQ = q_chz.size();
		while (sizeQ--) {
			x = q_chz.front().first;
			y = q_chz.front().second;
			q_chz.pop();
			cnt_air = 0;
			if (x > 0 && arr[x - 1][y] == -1) cnt_air++;
			if (x < N-1 && arr[x + 1][y] == -1) cnt_air++;
			if (y > 0 && arr[x][y - 1] == -1) cnt_air++;
			if (y < M-1 && arr[x][y + 1] == -1) cnt_air++;
			if (cnt_air > 1) {
				arr[x][y] = 0;
				q_air.push(make_pair(x, y));
			}
			else {
				q_chz.push(make_pair(x, y));
			}
		}
		cnt++;
		if (q_chz.size() == 0) break;
	}
	cout << cnt;
}