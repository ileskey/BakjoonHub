#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int comp(pair<int, int>a, pair<int, int>b) {
	return a.second != b.second ? a.second < b.second : a.first < b.first;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector<pair<int, int>> v;
	int N, a, b, i;
	cin >> N;
	for (i = 0; i < N; i++) {
		cin >> a >> b;
		v.push_back(make_pair(a, b));
	}
	sort(v.begin(), v.end(), comp);
	for (pair<int, int>a : v) {
		cout << a.first << " "<<a.second << "\n";
	}
}