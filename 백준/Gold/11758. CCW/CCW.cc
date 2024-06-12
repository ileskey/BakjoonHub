#include<iostream>
using namespace std;
int main() {
	int x1, y1, x2, y2, x3, y3, dx1, dy1, dx2, dy2, m;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	dx1 = x2 - x1;
	dx2 = x3 - x2;
	dy1 = y2 - y1;
	dy2 = y3 - y2;
	m = dx1 * dy2 - dx2 * dy1;
	if (m > 0)cout << 1;
	else if (m == 0)cout << 0;
	else cout << -1;
}