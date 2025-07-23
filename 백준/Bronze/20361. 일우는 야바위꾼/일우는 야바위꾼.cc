#include<iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, X, K, a, b;
	cin >> N >> X >> K;
	for (int i = 0;i < K;i++) {
		cin >> a >> b;
		if (X == a) {
			X = b;
		}
		else if (X == b) {
			X = a;
		}
	}
	cout << X;
}