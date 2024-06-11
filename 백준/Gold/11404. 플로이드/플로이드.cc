#include<iostream>
using namespace std;
int main() {
	int dist[101][101] = {};
	for (int i = 1; i < 101; i++) {
		for (int j = 1; j < 101; j++)
			dist[i][j] = 999999999;
		dist[i][i] = 0;
	}
	int n, m, a, b, c;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		if(dist[a][b]>c)
		dist[a][b] = c;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			for (int k = 1; k <= n; k++) {
				if (dist[j][k] > dist[j][i] + dist[i][k])dist[j][k] = dist[j][i]+dist[i][k];
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (dist[i][j] > 999999998)dist[i][j] = 0;
			cout << dist[i][j] << " ";
		}
		cout << "\n";
	}
}