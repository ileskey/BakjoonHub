#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector<int> v;
	int n, N, M, t, l, r, m;
	cin >> n;
	while (n--) {
		cin >> N;
		for (int i = 0; i < N; i++) {
			cin >> t;
			v.push_back(t);
		}
		sort(v.begin(), v.end());
		cin >> M;
		for (int i = 0; i < M; i++) {
			cin >> t;
			l = 0, r=N-1;
			while (l <= r) {
				m = (r + l) / 2;
				if (v[m] == t) { cout << "1\n"; break; }
				else if (v[m] > t)r = m - 1;
				else l = m+1;
			}
			if (l>r && v[m] != t) cout << "0\n";
		}
		v.clear();
	}
}