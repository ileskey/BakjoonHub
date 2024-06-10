#include<iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m, p, sum = 0;
	cin >> n >> m >> p;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (2*(i + j) < p) continue;
			sum += (n - i + 1) * (m - j + 1);
		}
	}
	cout << sum;
}