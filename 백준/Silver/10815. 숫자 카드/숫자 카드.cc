#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	vector<int>v;
	int a, b, d;
	cin >> a;
	while (a--) {
		cin >> b;
		v.push_back(b);
	}
	sort(v.begin(), v.end());
	cin >> b;
	while (b--) {
		d = 0;
		cin >> a;
		int l = 0, r = v.size() - 1, m;
		while (l <= r) {
			m = (l + r) / 2;
			if (v[m] < a)l = m + 1;
			else if (v[m] == a) { d = 1; break; }
			else r = m - 1;
		}
		if (d) cout << 1;
		else cout << 0;
		cout << " ";
	}
}