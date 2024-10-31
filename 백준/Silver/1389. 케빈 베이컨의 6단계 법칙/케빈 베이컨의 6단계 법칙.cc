#include<iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int arr[101][101] = {};
	int sum[101];
	int N, M, x, y;
	cin >> N >> M;
	for (int i = 1; i <= N; i++)for (int j = 1; j <= N; j++)arr[i][j] = 300;
	while (M--) {
		cin >> x >> y;
		arr[x][y] = 1;
		arr[y][x] = 1;
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			for (int k = 1; k <= N; k++) {
				if (arr[j][k] > arr[j][i] + arr[i][k]) arr[j][k] = arr[j][i] + arr[i][k];
			}
		}
	}
	for (int i = 1; i <= N; i++) for (int j = 1; j <= N; j++) sum[i] += arr[i][j];
	x = 1;
	for (int i = 2; i <= N; i++) if (sum[x] > sum[i]) x = i;
	cout << x;
}