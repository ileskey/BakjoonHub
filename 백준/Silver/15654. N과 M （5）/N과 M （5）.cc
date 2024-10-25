#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int arr[9];
void func(int t, int N, int M) {
	vector<int> v;
	int tmp = t;
	while (tmp > 0) {
		v.push_back(tmp % 10);
		tmp /= 10;
	}
	if (M == 0) {
		int si = v.size();
		for (int i = 0; i < si; i++) {
			cout << arr[*(v.rbegin() + i)] << " ";
		}
		cout << "\n";
	}
	for (int i = 1; i <= N; i++) {
		int flag = 1;
		for (int j : v) if (i == j) flag = 0;
		if (flag)func(t * 10 + i, N, M - 1);
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M;
	cin >> N >> M;
	for (int i = 1; i <= N; i++)cin >> arr[i];
	sort(arr+1, arr + N+1);
	func(0, N, M);
}