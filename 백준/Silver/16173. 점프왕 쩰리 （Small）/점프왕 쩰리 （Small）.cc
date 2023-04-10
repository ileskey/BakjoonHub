#include<iostream>
#include<queue>
using namespace std;
int main() {
	int N, a, b, c, x, y, d;
	int arr[3][3]{};
	int did[3][3]{};
	queue <pair<int, int>> q;
	cin >> N;
	for (a = 0; a < N; a++) {
		for (b = 0; b < N; b++) cin >> arr[a][b];
	}
	q.push({ 0,0 });
	did[0][0] = 1;
	c = q.size();
	while (c--) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		if (x == N - 1 && y == N - 1) {
			cout << "HaruHaru";
			return 0;
		}
		if (x <= N - 1 && y <= N - 1) {
			d = arr[x][y];
			if (x + d <= N - 1 && !did[x + d][y]) {
				q.push({ x + d, y });
				did[x + d][y] = 1;
			}
			if (y + d <= N - 1 && !did[x][y + d]) {
				q.push({ x, y + d });
				did[x][y + d] = 1;
			}
		}
		c = q.size();
	}
	cout << "Hing";
	return 0;
}