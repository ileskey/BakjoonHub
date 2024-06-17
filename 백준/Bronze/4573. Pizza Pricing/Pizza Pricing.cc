#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int comp(pair<double, int>x, pair<double, int>y) {
	return x.first < y.first;
}
int main() {
	int N, p, cnt=0;
	double gsb, d;
	while (true) {
		cin >> N;
		if (N == 0)break;
		cnt++;
		vector<pair<double, int>> v;
		while (N--) {
			cin >> d >> p;
			gsb = p / (d / 2 * d / 2 * 3.14);
			v.push_back(make_pair(gsb, d));
		}
		sort(v.begin(), v.end(), comp);
		cout << "Menu " << cnt << ": " << v.front().second<<"\n";
	}
}