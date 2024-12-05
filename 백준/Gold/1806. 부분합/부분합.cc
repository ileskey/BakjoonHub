#include<iostream>
using namespace std;
int arr[100001];
int main() {
	int N, S;
	cin >> N >> S >> arr[1];
	for (int i = 2; i <= N; i++) {
		cin >> arr[i];
		arr[i] += arr[i - 1];
	}
	int p1 = 0, p2 = 1, min = N;
	if (arr[N] < S) {
		cout << 0;
		return 0;
	}
	else if (arr[N] == S) {
		cout << N;
		return 0;
	}
	while (p1 < p2 && p2 <= N) {
		if (arr[p2] - arr[p1] >= S) {
			if (min > p2 - p1)min = p2 - p1;
			p1++;
		}
		else {
			p2++;
		}
	}
	cout << min;
}