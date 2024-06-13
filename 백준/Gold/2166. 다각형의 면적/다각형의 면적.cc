#include<iostream>
using namespace std;
int main() {
	long long N, arr[10000][2];
	double sum=0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i][0] >> arr[i][1];
	}
	for (int i = 0; i < N - 1; i++) {
		sum += arr[i][0] * arr[i + 1][1];
		sum -= arr[i][1] * arr[i + 1][0];
	}
	sum += arr[N - 1][0] * arr[0][1];
	sum -= arr[N - 1][1] * arr[0][0];
	if (sum < 0) sum *= -1;
	cout << fixed;
	cout.precision(1);
	cout << sum/2;
}