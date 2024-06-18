#include<iostream>
using namespace std;
int main() {
	int arr[1000] = {};
	int N, Q, k, l, r ,o, cnt;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	cin >> Q;
	while (Q--) {
		cin >> k >> l >> r;
		l--;
		if (k == 1) {
			cin >> o;
			cnt = 0;
			while (l < r) if (arr[l++] == o) cnt++;
			cout << cnt << "\n";
		}
		else while (l < r) arr[l++] = 0;
	}
}