#include<iostream>
using namespace std;
int main() {
	int N, M = 1, cnt = 0;;
	cin >> N;
	while (true) {
		if (N < 10) break;
		while (N > 0) {
			M *= (N % 10);
			N /= 10;
		}
		N = M;
		M = 1;
		cnt++;
	}
	cout << cnt;
}