#include<iostream>
int main() {
	int a, b, c, d;
	std::cin >> a >> b >> c;
	c -= a;
	d = a - b;
	std::cout << c / d + ((c % d > 0) ? 2 : 1);
}