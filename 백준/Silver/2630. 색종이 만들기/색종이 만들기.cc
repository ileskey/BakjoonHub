#include<iostream>
using namespace std;
int sum[3];
int arr[128][128];
int foo(int x, int y, int N) {
	if (N < 2) {
		return arr[x][y];
	}
	int ar[4] = { foo(x, y, N / 2) ,foo(x, y + N / 2, N / 2) ,foo(x + N / 2, y, N / 2) ,foo(x + N / 2, y + N / 2, N / 2) };
	if (ar[0]==ar[1]&&ar[0]==ar[2]&&ar[0]==ar[3]) {
		return ar[0];
	}
	for (int i = 0; i < 4; i++) sum[ar[i]]++;
	return 2;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, t;
	cin >> N;
	for (int i = 0; i < N; i++)for (int j = 0; j < N; j++)cin >> arr[i][j];
	sum[foo(0, 0, N)]++;
	cout << sum[0] << "\n" << sum[1];
}