#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int* x, * y, * z, a, b,c, i, j, k, bef = 0, aft = 0;
	cin >> i >> j >> k;
	x = new int[i];
	y = new int[j];
	z = new int[k];
	b = i < j ? i : j;
	b = b < k ? b : k;
	for (a = 0; a < i; a++)cin >> x[a];
	for (a = 0; a < j; a++)cin >> y[a];
	for (a = 0; a < k; a++)cin >> z[a];
	sort(x, x + i,greater<>());
	sort(y, y + j, greater<>());
	sort(z, z + k, greater<>());
	for (a = 0; a < b; a++) {
		c= x[a] + y[a] + z[a];
		bef += c;
		aft += (c * 9 / 10);
	}
	for (a = b; a < i; a++) {
		bef += x[a];
		aft += x[a];
	}
	for (a = b; a < j; a++) {
		bef += y[a];
		aft += y[a];
	}
	for (a = b; a < k; a++) {
		bef += z[a];
		aft += z[a];
	}
	cout << bef << "\n" << aft;
}