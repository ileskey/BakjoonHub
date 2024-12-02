#include<iostream>
using namespace std;
int ans[2001][2001] = {};
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M, S, E, start, end;
	int arr[2001];
	cin >> N;
	for (int i = 1; i <= N; i++) cin >> arr[i];
	cin >> M;
	for (int i = 1; i <= N; i++) {
		start = i;
		end = i;
		ans[start][end] = 1;
		while (true) {
			if (start == 1 || end == N || !ans[start][end]) break;
			if (arr[--start] == arr[++end]) ans[start][end] = 1;
		}
		if (i == N) break;
		start = i;
		end = i + 1;
		if(arr[start] == arr[end]) ans[start][end] = 1;
		while (true) {
			if (start == 1 || end == N || !ans[start][end]) break;
			if (arr[--start] == arr[++end]) ans[start][end] = 1;
		}
	}
	for (int i = 0; i < M; i++) {
		cin >> S >> E;
		cout << ans[S][E]<<"\n";
	}
}