#include<iostream>
using namespace std;
int N, * arr;
int run() {
	int a, b, c, d,i, A, B, C, D, max=0;
	for (a = 0; a < N; a++) {
		A = arr[a];
		for (b = a + 1; b < N; b++) {
			B = arr[b] / arr[a];
			for (c = b + 1; c < N-1; c++) {
				C = arr[c] / arr[b];
				D = arr[N - 1] / arr[c];
				if (A + B + C + D > max)max = A + B + C + D;
				if (c == N - 1 && b == c + 1 && a == b + 1) {
					return max;
				}
			}
		}
	}
	return max;
}
int main() {
	int a, max;
	cin >> N;
	arr = new int[N];
	cin >> arr[0];
	for (a = 1; a < N; a++) {
		cin >> arr[a];
		arr[a] *= arr[a - 1];
	}
	max = run();
	cout << max;
}