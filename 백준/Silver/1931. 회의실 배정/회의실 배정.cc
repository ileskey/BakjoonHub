#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int compare(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second) return a.first < b.first;
	return a.second < b. second;
}
int main() {
	int N, a, b;
	scanf("%d", &N);
	vector<pair<int, int>> v;
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &a, &b);
		v.push_back(make_pair(a, b));
	}
	sort(v.begin(), v.end(), compare);
	int time = 0, sum = 0, size = v.size();
	for (pair<int, int>n : v) {
		if (n.first >= time) {
			time = n.second;
			sum++;
		}
	}
	printf("%d", sum);
}