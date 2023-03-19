#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	if ((x1 == x2 && x2 == x3) || ((double)(y2-y1)/(x2-x1)==(double)(y3-y1)/(x3-x1))) {
		cout << -1.0;
		return 0;
	}
	double a, b, c;
	a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	c = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	cout << fixed;
	cout.precision(12);
	if (a > b) {
		if (b > c) cout << 2 * (a - c);
		else if (c > a) cout << 2 * (c - b);
		else cout << 2 * (a - b);
	}
	else {
		if (a > c) cout << 2 * (b - c);
		else if (c > b) cout << 2 * (c - a);
		else cout << 2 * (b - a);
	}
}