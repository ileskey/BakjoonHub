#include<iostream>
using namespace std;
int main() {
	int N, M, a = 0, b = 1, c;
	cin >> N >> M;
	if (N > M)c = M;
	else c = N;
	while (N % 2 == 1 && M % 2 == 1) {
		a += b;
		b *= 4;
		N /= 2;
		M /= 2;
	}
	cout << a;
}