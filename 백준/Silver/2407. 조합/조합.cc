#include<iostream>
using namespace std;
#define c b - 1
#define d b - 2
int main() {
	int N, M, a, b, m = 159;
	cin >> N >> M;
	short z[160] = { 0, };
	z[159] = 1;
	for (a = N - M + 1; a <= N; a++) {
		for (b = m; b < 160; b++) {
			z[b] *= a;
			if (z[b] > 99) { z[d] += z[b] / 100; z[b] %= 100; if (m > d)m = d; }
			if (z[b] > 9) { z[c] += z[b] / 10; z[b] %= 10; if (m > c)m = c; }
		}
	}
	for (b = 159; b >= m; b--) {
		if (z[b] > 99) { z[d] += z[b] / 100; z[b] %= 100; if (m > d)m = d; }
		if (z[b] > 9) { z[c] += z[b] / 10; z[b] %= 10; if (m > c)m = c; }
	}
	for (a = 1; a < M + 1; a++) {
		for (b = m; b < 159; b++) {
			if (z[b] / a > 0) {
				z[b + 1] += (z[b] % a) * 10;
				z[b] /= a;
			}
			else {
				z[b + 1] += z[b] * 10;
				z[b] = 0;
				if (b == m)m++;
			}
		}
		z[159] /= a;
	}
	for (a = m; a < 160; a++)cout << z[a];
}