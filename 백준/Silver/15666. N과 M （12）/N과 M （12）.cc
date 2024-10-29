#include<iostream>
#include<algorithm>
using namespace std;
int arr_in[9];
int arr_fix[9];
int arr_arr[9] = { 1, };
int N, M;
int foo(int a) {
	if (a == M + 1) {
		int t = 0;
		for (int i = 1; i <= M; i++) {
			cout << arr_fix[arr_arr[i]] << " ";
		}
		cout << "\n";
		return 0;
	}
	for (int i = arr_arr[a - 1]; i <= N; i++) {
		arr_arr[a] = i;
		foo(a + 1);
	}
	return 0;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> M;
	for (int i = 1; i <= N; i++)cin >> arr_in[i];
	sort(arr_in + 1, arr_in + N + 1);
	int j = 0;
	for (int i = 1; i <= N; i++) {
		if (arr_in[i - 1] != arr_in[i])arr_fix[++j] = arr_in[i];
	}
	N = j;
	for (int i = 1; i <= N; i++) { arr_in[i] = i; }
	foo(1);
}