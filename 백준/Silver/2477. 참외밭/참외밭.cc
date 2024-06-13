#include<iostream>
using namespace std;
int main() {
	int k, a, b, arr[6][2] = {};
	int x = 0, y = 0;
	cin >> k;
	for (int i = 0; i < 6; i++) {
		cin >> a >> b;
		switch (a) {
		case 1:
			x += b;
			break;
		case 2:
			x -= b;
			break;
		case 3:
			y -= b;
			break;
		case 4:
			y += b;
			break;
		}
		arr[i][0] = x;
		arr[i][1] = y;
		a=b;
	}
	a = 0;
	for (int i = 0; i < 6; i++) {
		a += arr[i][0] * arr[(i + 1) % 6][1];
		a -= arr[i][1] * arr[(i + 1) % 6][0];
	}
	if (a < 0)a *= -1;
	cout << a/2 * k;
}