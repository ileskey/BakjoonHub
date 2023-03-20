#include<cmath>
#include<iostream>
using namespace std;

int main() {
	int a, ra, b = 255, c, d, e, f, w, x, y, z, cnt;
	cin >> a;
	while (a && b) {
		ra = sqrtf(a);
		cnt = 0;

		for (c = ra; c > 0; c--) {
			w = a - c * c;
			if (w == 0) { cnt++; continue; }
			if (w < 0)continue;
			for (d = c; d >= 0; d--) {
				x = w - d * d;
				if (x == 0) { cnt++; continue; }
				if (x < 0)continue;
				for (e = d; e >= 0; e--) {
					y = x - e * e;
					if (y == 0) { cnt++; continue; }
					if (y < 0)continue;
					for (f = e; f >= 0; f--) {
						z = y - f * f;
						if (z == 0) { cnt++; continue; }
						if (z < 0)continue;
					}
				}
			}
		}
		cout << cnt << "\n";
		cin >> a;
	}
}