#include<iostream>
using namespace std;
int main() {
	int N, M, K,a,b;
	cin >> N >> M >> K;
	int left = K-1, right = N - K,max=0,n,win=0;
	n = N;
	while (n>1) { max++; n /= 2; }
	while (1) {
		if (right % 2) {
			if (left > 0) {
				(right /= 2)++;
				left--;
			}
			else break;
		}
		else right /= 2;
		if (left > 0) {
			left--;
			win++;
		}
		else break;
		left /= 2;
	}
	while (M && win < max) { win++; M--; }
	cout << win;
}