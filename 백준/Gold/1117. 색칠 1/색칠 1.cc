#include<iostream>
using namespace std;
int main() {
	long long width, height, f, c, x1, y1, x2, y2, dy, area, s1=0, s2=0;
	cin >> width >> height >> f >> c >> x1 >> y1 >> x2 >> y2;
	if (f > width / 2)f = width - f;
	dy = y2 - y1;
	c++;
	area = width * height;
	if (x2 <= f) {
		s1=(x2 - x1)* dy * 2;
	}
	else if (x1 >= f) {
		s2 = (x2 - x1) * dy;
	}
	else {
		s1 = (f - x1) * dy * 2;
		s2 = (x2 - f) * dy;
	}
	cout << area - (s1 + s2) * c;
}