#include<iostream>
using namespace std;
int main() {
	int N, a, b,l,r,t=0;
	cin >> N;
	int** arr=new int*[N];
	for (a = 0; a < N; a++) arr[a] = new int[N] {};
	for (a = 0; a < N; a++)for (b = 0; b <= a; b++) cin >> arr[a][b];
	for (a = N-1; a >0; a--) {
		for (b = 0; b < a; b++) {
			l = arr[a][b];
			r = arr[a][b + 1];
			arr[a-1][b] += max(l, r);
		}
	}
	cout << arr[0][0];
	return 0;
}