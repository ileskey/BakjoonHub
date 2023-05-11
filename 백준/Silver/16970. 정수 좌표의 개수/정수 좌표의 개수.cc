#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a, int b) {
	if (b)return gcd(b, a % b);
	else return a;
}
int main() {
	int x0, y0, x1, y1, dx, dy, N, M, K, cnt = 0;
	cin >> N >> M >> K;
	for (x0 = 0; x0 <= N; x0++) for (y0 = 0; y0 <= M; y0++)
		for (x1 = 0; x1 <= N; x1++) for (y1 = 0; y1 <= M; y1++) {
			dx = x1 - x0, dy = y1 - y0;
			if (dx < 0)dx *= -1;
			if (dy < 0)dy *= -1;
			if ((gcd(dx, dy) + 1) == K)cnt++;
		}
	cout << cnt / 2;
}