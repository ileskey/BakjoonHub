#include<iostream>
#include<string>
using namespace std;
void func(int t, int N, int M) {
	if (M == 0) {
		string s = to_string(t);
		int i = 0, len = s.length();
		for (int i = 1; i < len; i++) cout << s[i] << " ";
		cout << "\n";
		return;
	}
	for (int i = t % 10; i <= N; i++) {
		func(t * 10 + i, N, M - 1);
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, M;
	int arr[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	cin >> N >> M;
	func(1, N, M);
}