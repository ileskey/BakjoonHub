#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << a + b - c << "\n";
	if (b == 1000)a *= 10000;
	else if (b > 99)a *= 1000;
	else if (b > 9)a *= 100;
	else a *= 10;
	cout << a + b - c;
}