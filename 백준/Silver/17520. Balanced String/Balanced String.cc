#include<iostream>
using namespace std;
int main() {
	long long N, x = 1;
	cin >> N;
	N = (N+1)/2;
	for (int i = 1; i <= N; i++) {
		x *= 2;
		x %= 16769023;
	}
	cout << x;
}