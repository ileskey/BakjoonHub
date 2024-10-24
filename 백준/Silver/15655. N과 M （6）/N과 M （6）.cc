#include<iostream>
#include<string>
#include<algorithm>
int arr[8];
using namespace std;
void func(int t, int N, int M) {
	if (M == 0) {
		string s = to_string(t);
		int i = 0, len = s.length();
		for (int i = 0; i < len; i++) cout << arr[s[i]-'1'] << " ";
		cout << "\n";
		return;
	}
	for (int i = t % 10 + 1; i + M - 1 <= N; i++) {
		func(t * 10 + i, N, M - 1);
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N);
	func(0, N, M);
}