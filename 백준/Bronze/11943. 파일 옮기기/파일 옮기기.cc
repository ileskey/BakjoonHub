#include<iostream>
int main() {
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;
	a += d, b += c;
	if (a < b)std::cout << a;
	else std::cout << b;
}