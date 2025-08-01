#include<iostream>
using namespace std;
int main() {
	int N, M, f, max,i_max = 0, arr[2][10000] = {};
	cin >> N;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		M = N - i;
		max = 0;
		f = 1;
		for (int j = 0; j < N; j++) {
			if (arr[0][j] != arr[1][j]) {
				f = 0;
				break;
			}
		}
		if (f) { 
			cout << 1;
			return 0;
		}
		for (int j = 0; j < M; j++) {
			if (arr[0][j] > max) {
				max = arr[0][j];
				i_max = j;
			}
		}
		f = arr[0][i_max];
		arr[0][i_max] = arr[0][M - 1];
		arr[0][M - 1] = f;
	}
	f = 1;
	for (int i = 0; i < N; i++) {
		if (arr[0][i] != arr[1][i]) {
			f = 0;
			break;
		}
	}
	cout << f;
}