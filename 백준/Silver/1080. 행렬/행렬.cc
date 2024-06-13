#include<iostream>
using namespace std;
int main() {
	int N, M, cnt = 0, arr[50][50] = {}, ans[50][50] = {};
	char c;
	cin >> N >> M;
	for (int i = 0; i < N; i++) for (int j = 0; j < M; j++) {
		cin >> c;
		arr[i][j] = c - '0';
	}
	for (int i = 0; i < N; i++) for (int j = 0; j < M; j++) {
		cin >> c;
		ans[i][j] = c - '0';
	}
	for (int i = 0; i < N - 2; i++) {
		for (int j = 0; j < M - 2; j++) {
			if (arr[i][j] == ans[i][j]) continue;
			for(int k=0;k<3;k++)for(int l=0;l<3;l++) arr[i+k][j+l] ^= 1;
			cnt++;
		}
	}
	for (int i = 0; i < N; i++) for (int j = 0; j < M; j++) {
		if (arr[i][j] == ans[i][j]) continue;
		cout << -1;
		return 0;
	}
	cout << cnt;
}