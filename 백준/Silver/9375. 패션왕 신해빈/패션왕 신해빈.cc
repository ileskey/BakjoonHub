#include<iostream>
#include<list>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, n;
	string s1, s2;
	list<pair<string, int>> l;
	cin >> N;
	while (N--) {
		cin >> n;
		while (n--) {
			cin >> s1 >> s2;
			int flag = 1;
			;
			for (list<pair<string, int>>::iterator iter = l.begin(); iter != l.end(); iter++) {
				if (iter->first.compare(s2) == 0) {
					iter->second++;
					flag = 0;
					break;
				}
			}
			if (flag) l.push_back(make_pair(s2, 1));
		}
		n = 1;
		for (pair<string, int>p : l) {
			n *= (p.second + 1);
		}
		l.clear();
		cout << n - 1 << "\n";
	}
}