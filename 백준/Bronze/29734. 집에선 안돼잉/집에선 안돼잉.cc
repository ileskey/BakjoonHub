#include<iostream>
using namespace std;
int main() {
	long long N, M, T, S, a;
	cin >> N >> M >> T >> S;
	a = (N - 1) / 8;
	N += a * S;
	a = (M - 1) / 8;
	M += a * S;
	M += (2 * a + 1) * T;
	if (N < M) cout << "Zip\n" << N;
	else cout << "Dok\n" << M;
}