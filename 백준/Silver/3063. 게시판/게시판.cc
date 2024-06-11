#include<iostream>
using namespace std;
int foo(int x1, int x2, int x3, int x4) {
	int dx;
	if (x3 < x1) {
		if (x4 < x1) dx = 0;
		else if (x4 < x2) dx = x4 - x1;
		else dx = x2 - x1;
	}
	else if (x3 < x2) {
		if (x4 < x2)dx = x4 - x3;
		else dx = x2 - x3;
	}
	else {
		dx = 0;
	}
	return dx;
}
int main() {
	int N, x1, x2, x3, x4, y1, y2, y3, y4, area, dx, dy;
	cin >> N;
	while (N--) {
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		area = (x2 - x1) * (y2 - y1);
		dx = foo(x1, x2, x3, x4);
		dy = foo(y1, y2, y3, y4);
		cout << area - dx * dy << "\n";
	}
}