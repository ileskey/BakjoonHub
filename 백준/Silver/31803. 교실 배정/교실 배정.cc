#include<iostream>
using namespace std;
int main() {
	long long N, cls, pie=1, t;
	cin >> N;
	cls = N / 2;
	t = cls;
	for (int i = N; i > cls; i--) {
		pie *= i;
		if (t > 0 && pie % 2 == 0) { t--; pie /= 2; }
	}
	while (t--)pie /= 2;
	cout << pie;
}