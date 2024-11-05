#include<iostream>
using namespace std;
int K, N, cnt;
int arr_arr[11];
int arr_did[11];
void func(int n, int k) {
	if (n == 0) {
		cnt++;
		if (N == cnt) {
			long long ans = 0;
			for (int i = K; i >0; i--) {
				ans *= 10;
				ans += arr_arr[i];
			}
			cout << ans;
		}
		return;
	}
	for (int j = n - 1; j < k; j++) {
		if (arr_did[j])continue;
		arr_did[j] = 1;
		arr_arr[n] = j;
		func(n - 1, j);
		arr_did[j] = 0;
	}
}
int main() {
	int n = 1;
	K = 1;
	cin >> N;
	while (K <= 10) {
		n *= (11 - K);
		n /= K;
		if (N - n > 0) N -= n;
		else break;
		K++;
	}
	if (N > 0 && K > 10) {
		cout << -1;
		return 0;
	}
	func(K, 10);
	return 0;
}