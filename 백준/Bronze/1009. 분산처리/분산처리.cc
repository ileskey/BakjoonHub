#include<iostream>
using namespace std;
int main() {
	int N, a, b, c;
	cin >> N;
	while (N--) {
		cin >> a >> b;
		c = 1;
		while (b--) (c *= a) %= 10;
		if (c == 0)c = 10;
		cout << c << "\n";
	}
}