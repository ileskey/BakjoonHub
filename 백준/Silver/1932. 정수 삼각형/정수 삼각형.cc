#include<iostream>
using namespace std;
int main() {
	int N, a, b,l,r,t=0;
	cin >> N;
	int** arr=new int*[N];
	for (a = 0; a < N; a++) arr[a] = new int[N] {};
	for (a = 0; a < N; a++)for (b = 0; b <= a; b++) cin >> arr[a][b];
	for (a = 1; a < N; a++) {
		for (b = 0; b < N; b++) {
			l = 0, r = 0;
			if (b > 0)l = arr[a - 1][b - 1];
			if (b < N)r = arr[a - 1][b];
			arr[a][b] += max(l, r);
		}
	}
	for (a = 0; a < N; a++)t = max(t, arr[N - 1][a]);
	cout << t;
	return 0;
}