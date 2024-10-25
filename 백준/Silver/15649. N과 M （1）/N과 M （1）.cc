#include<iostream>
#include<string>
#include<vector>
using namespace std;
void func(int t, int N, int M) {
	if (M == 0) {
		string s = to_string(t);
		int i = 0, len = s.length();
		for (int i = 0; i < len; i++) cout << s[i] << " ";
		cout << "\n";
		return;
	}
	vector<int> v;
	int tmp = t;
	while (tmp > 0) {
		v.push_back(tmp % 10);
		tmp /= 10;
	}
	for (int i = 1; i <= N; i++) {
		int flag = 1;
		for (int j : v) if (i == j) flag = 0;
		if(flag)func(t * 10 + i, N, M - 1);
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M;
	cin >> N >> M;
	func(0, N, M);
}