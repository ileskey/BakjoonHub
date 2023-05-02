#include<iostream>
#include<algorithm>
using namespace std;
typedef struct {
	string s;
	int i;
}st;
int msort(st &a, st& b) {
	if (a.i > b.i)return 1;
	else if (a.i < b.i)return 0;
	return (a.s<b.s)?1:0;
}
int main() {
	int N, a, b;
	st* srr;
	cin >> N;
	srr = new st[N]{};
	for (a = 0; a < N; a++) {
		cin >> srr[a].s >> srr[a].i;
	}
	sort(srr, srr + N, msort);
	cout << srr[0].s;
}