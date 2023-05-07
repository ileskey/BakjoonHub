#include<iostream>
using namespace std;
void mcp(int* a, int* b, int c) {
	for (int d = 0; d < c; d++)a[d] = b[d];
}
int main() {
	int N, K, a,b,c, * ar1, * ar2;
	cin >> N >> K;
	if (N < 3)cout << 1;
	else {
		ar1 = new int[N] {1};
		ar2 = new int[N] {1,1};
		for (a = 2; a < N; a++) {
			for (b = 1; b <= a; b++) ar1[b] = ar2[b] + ar2[b - 1];
			ar1[a] = 1;
			mcp(ar2, ar1, a + 1);
		}
		cout << ar1[K-1];
	}
}