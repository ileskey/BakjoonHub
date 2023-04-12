#include<iostream>
#include<queue>
using namespace std;
queue <pair<int, int>> q;
char** did;
int N, M;
void run() {
	int x, y, d = q.size();
	char c;
	while (d--) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		c = did[x][y];
		did[x][y] = 0;
		if (c == '-') {
			if (y - 1 >= 0 && did[x][y - 1] == '-')q.push({ x,y - 1 });
			if (y + 1 < M && did[x][y + 1] == '-')q.push({ x,y + 1 });
		}
		else {
			if (x - 1 >= 0 && did[x - 1][y] == '|')q.push({ x - 1,y });
			if (x + 1 < N && did[x + 1][y] == '|')q.push({ x + 1,y });
		}
		d = q.size();
	}
}
int main() {
	int a, b, c = 0, m;
	cin >> N >> M;
	did = new char* [N];
	for (a = 0; a < N; a++) {
		did[a] = new char[M];
		for (b = 0; b < M; b++) cin >> did[a][b];
	}
	for (a = 0; a < N; a++) {
		for (b = 0; b < M; b++) {
			if (!did[a][b]) continue;
			q.push({ a,b });
			run();
			c++;
		}
	}
	cout << c;
}