#include<iostream>
using namespace std;
int arr[1025][1025];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M, t, a, b, c, d;
	cin >> N >> M;
	for (int i = 1; i <= N; i++)for (int j = 1; j <= N; j++) {
		cin >> arr[i][j];
		if (i > 1) arr[i][j] += arr[i - 1][j];
		if (j > 1)arr[i][j] += arr[i][j - 1];
		if (i > 1 && j > 1)arr[i][j] -= arr[i - 1][j - 1];
	}
	for (int i = 0; i < M; i++) {
		cin >> a >> b >> c >> d;
		t = arr[c][d] + arr[a - 1][b - 1];
		t -= (arr[a - 1][d] + arr[c][b - 1]);
		cout << t << "\n";
	}
}