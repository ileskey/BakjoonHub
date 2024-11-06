#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;
int main() {
	vector<int> v;
	map<int, int> m;
	int N, x, idx=0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x;
		v.push_back(x);
	}
	set<int> s(v.begin(), v.end());
	for (int x : s) {
		m.insert({ x, idx++ });
	}
	for (int x : v) {
		cout << m[x] << " ";
	}
}