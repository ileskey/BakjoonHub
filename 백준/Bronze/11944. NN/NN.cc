#include<iostream>
using namespace std;
int main() {
	int N, M, O, P, Q, arr[4] = {}, i = 0;
	cin >> N >> M;
	if (N > 999) O = 4;
	else if (N > 99) O = 3;
	else if (N > 9) O = 2;
	else O = 1;
	if (N * O < M)M = N * O;
	P = M / O;
	Q = M % O;
	while (P--)cout << N;
	while (N > 0) {
		arr[i++] = N % 10;
		N /= 10;
	}
	for (int j = 1;j <= Q;j++) {
		cout << arr[O - j];
	}
}