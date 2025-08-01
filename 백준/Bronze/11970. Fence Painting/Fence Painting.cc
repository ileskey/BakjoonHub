#include<iostream>
using namespace std;
int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (b < c || a > d) {
		cout << b - a + d - c;
		return 0;
	}
	cout << (b > d ? b : d) - (a < c ? a : c);
}