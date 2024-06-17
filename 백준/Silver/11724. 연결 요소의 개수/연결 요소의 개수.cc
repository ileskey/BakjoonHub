#include<iostream>
using namespace std;
int N, did[1000], arr[1000][1000];
void foo(int i) {
	for (int j = 0; j < N; j++) {
		if (did[j] == 0 && arr[i][j]) {
			did[j] = 1;
			foo(j);
		}
	}
}
int main() {
	int M, x, y, cnt = 0;
	cin >> N >> M;
	while (M--) {
		cin >> x >> y;
		arr[x - 1][y - 1] = 1;
		arr[y - 1][x - 1] = 1;
	}
	for (int i = 0; i < N; i++) {
		if (did[i] == 0) {
			foo(i);
			cnt++;
		}
	}
	cout << cnt;
}