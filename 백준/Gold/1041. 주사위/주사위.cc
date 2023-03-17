#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	long long N, a = 0;
	int b[6], c[12], d[8];
	int e[4][2] = { {1,2},{2,4},{1,3},{3,4} };
	int x = 0, y, z, t = 0, s;
	cin >> N;
	for (z = 0; z < 6; z++) cin >> b[z];
	for (z = 0; z < 6; z++) for (y = z + 1; y < 6; y++) {
		if (y + z == 5)continue;
		c[x++] = b[y] + b[z];
	}
	for (x = 0, z = 0; z < 6; z += 5, t = 0) {
		s = 4;
		while (s--)d[x++] = b[z] + b[e[t][0]] + b[e[t++][1]];
	}
	sort(b, b + 6), sort(c, c + 12), sort(d, d + 8);
	if (N == 1) { cout << b[0] + b[1] + b[2] + b[3] + b[4]; return 0; }
	a += 4 * d[0];
	a += ((8 * N) - 12) * c[0];
	a += (4 * (N - 1) * (N - 2) + (N - 2) * (N - 2)) * b[0];
	cout << a;
	return 0;
}