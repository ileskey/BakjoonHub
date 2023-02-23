#include<iostream>
using namespace std;
int mpow(int a) {
	int b = 1;
	while (a--) {
		b *= 31;
	}
	return b;
}
int mHash(int N, char* arr) {
	long long sum = 0;
	for (int a = 0; a < N; a++) {
		sum += ((arr[a] - 96) * mpow(a));
	}
	return (int)(sum % 1234567891);
}
int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);
	int N;
	cin >> N;
	char* arr = new char[N+1];
	cin >> arr;
	cout << mHash(N, arr);
}