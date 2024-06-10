#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	vector<int> six, one;
	int N, M, a, b, sum=0;
	cin >> N >> M;
	while (M--) {
		cin >> a >> b;
		six.push_back(a);
		one.push_back(b);
	}
	sort(six.begin(), six.end());
	sort(one.begin(), one.end());
	if (six[0] < one[0] * 6) a = six[0];
	else a = one[0] * 6;
	b = one[0];
	sum += N / 6 * a;
	N %= 6;
	if (a < N * b) sum += a;
	else sum += b * N;
	cout << sum;
}