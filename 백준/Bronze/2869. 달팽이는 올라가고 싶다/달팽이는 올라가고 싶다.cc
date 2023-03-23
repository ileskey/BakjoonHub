#include<iostream>
int main() {
	int a, b, c;
	std::cin >> a >> b >> c;
	c -= a;
	a -= b;
	std::cout << c / a + ((c % a > 0) ? 2 : 1);
}