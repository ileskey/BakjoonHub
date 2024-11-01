#include<iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, x, y, t, b[4] = { 0,1,0,0 };
	cin >> N;
	while (N--) {
		cin >> x >> y;
		t = b[x]|b[y];
		b[x] ^= t;
		b[y] ^= t;
	}
	for (int i = 1; i < 4; i++) {
		if (b[i])cout << i;
	}
}