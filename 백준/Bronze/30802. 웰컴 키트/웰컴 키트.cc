#include<iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long N, arr[6], T, P, a = 0, b = 0, c = 0;
	cin >> N >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5] >> T >> P;
	for (int i = 0; i < 6; i++) {
		a += arr[i] / T;
		if (arr[i] % T) a++;
	}
	b = N / P;
	c = N % P;
	cout << a << "\n" << b << " " << c;
}