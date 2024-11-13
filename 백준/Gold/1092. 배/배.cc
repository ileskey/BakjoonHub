#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int arr_crain[51] = {}, arr_stock[51] = {};
	int N, M, t, max, space;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr_crain[i];
	}
	arr_crain[N] = 1111111;
	sort(arr_crain, arr_crain + N);
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> t;
		for (int j = 0; j <= N; j++) {
			if (t > arr_crain[j]) continue;
			arr_stock[j]++;
			break;
		}
	}
	if (arr_stock[N]) {
		cout << -1;
		return 0;
	}
	max = arr_stock[N - 1];
	space = 0;
	for (int i = N - 2; i >= 0; i--) {
		t = arr_stock[i];
		if (t > max) {
			if (space >= t) {
				space -= t;
				space += max;
			}
			else {
				t -= space;
				space = 0;
				if (t > max) {
					t -= max;
					max += t / (N - i);
					t %= (N - i);
					if (t) {
						space = N - i - t;
						max++;
					}
				}
				else {
					space = max - t;
				}
			}
		}
		else if (t <= max) {
			space += (max - t);
		}
	}
	cout << max;
}