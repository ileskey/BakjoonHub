#include<iostream>
using namespace std;
int main() {
	int N, arr[360], sum=0, a, b;
	cin >> N;
	for (int i = 0;i <= N;i++)cin >> arr[i];
	for (int i = 0;i < N;i++) {
		a = arr[i + 1] - arr[i];
		if (a < 0)a *= -1;
		b = 360 + (arr[i] > arr[i + 1] ? (arr[i + 1] - arr[i]) : (arr[i] - arr[i + 1]));
		sum += a < b ? a : b;
	}
	cout << sum;
}