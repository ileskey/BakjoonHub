#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int myround(float a) {
	if (a - floor(a) >= 0.5) return floor(a) + 1;
	else return floor(a);
}
int main() {
	int N, a, start, end;
	vector<int> v;
	cin >> N;
	if (N == 0) {
		cout << 0;
		return 0;
	}
	for (int i = 0; i < N; i++) {
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	start = myround(N * 0.15);
	end = N - start;
	a = 0;
	for (int i = start; i < end; i++) {
		a += v[i];
	}
	cout << myround((float)a / (end-start));
}