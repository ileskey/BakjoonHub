#include<iostream>
#include<queue>
using namespace std;
int arr[1000][1000] = {};
int dist[1000][1000] = {};
int main() {
	queue <pair< int, int >> q;
	int N, M, x, y, qsize=1;
	cin >> N >> M;
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < M;j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 0) {
				dist[i][j] = 1;
			}
			if (arr[i][j] == 2) {
				q.push({ i,j });
				dist[i][j] = 1;
			}
		}
	}
	while (qsize) {
		while (qsize--) {
			x = q.front().first;
			y = q.front().second;
			q.pop();
			if (x > 0 && !dist[x - 1][y]) {
				dist[x - 1][y] = dist[x][y] + 1;
				q.push({ x - 1,y });
			}
			if (x < N - 1 && !dist[x + 1][y]) {
				dist[x + 1][y] = dist[x][y] + 1;
				q.push({ x + 1,y });
			}
			if (y > 0 && !dist[x][y - 1]) {
				dist[x][y - 1] = dist[x][y] + 1;
				q.push({ x ,y - 1 });
			}
			if (y < M - 1 && !dist[x][y + 1]) {
				dist[x][y + 1] = dist[x][y] + 1;
				q.push({ x ,y + 1 });
			}
		}
		qsize = q.size();
	}
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < M;j++) {
			cout << dist[i][j] - 1 << " ";
		}
		cout << "\n";
	}
}