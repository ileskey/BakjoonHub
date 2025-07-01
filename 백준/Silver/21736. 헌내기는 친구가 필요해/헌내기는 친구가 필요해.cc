#include<iostream>
#include<queue>
using namespace std;
char arr[601][601];
int did[601][601];
queue<pair<int, int>> q;
int main() {
	int N, M, qsize=1, x, y, s=0;
	cin >> N >> M;
	for (int i = 0; i < N; i++) for (int j = 0; j < M; j++) {
		cin >> arr[i][j];
		if (arr[i][j] == 'I') {
			q.push({ i, j });
			did[i][j] = 1;
		}
	}
	while (qsize) {
		while (qsize--) {
			x = q.front().first;
			y = q.front().second;
			q.pop();
			if (arr[x][y] == 'X')continue;
			if (arr[x][y] == 'P')s++;
 			if (x > 0 && !did[x - 1][y]) {
				q.push({ x - 1, y });
				did[x - 1][y] = 1;
			}
			if (x < N-1 && !did[x + 1][y]) {
				q.push({ x + 1, y });
				did[x + 1][y] = 1;
			}
			if (y > 0 && !did[x][y - 1]) {
				q.push({ x, y - 1 });
				did[x][y - 1] = 1;
			}
			if (y < M-1 && !did[x][y + 1]) {
				q.push({ x, y + 1 });
				did[x][y + 1] = 1;
			}
		}
		qsize = q.size();
	}
	if (s) cout << s;
	else cout << "TT";
}