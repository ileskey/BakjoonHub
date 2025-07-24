#include<iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int row[500] = {}, col[500] = {}, sum = 0;
	int max = 0, N, M, slen;
	string s;
	cin >> N >> M;
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < M;j++) {
			cin >> s;
			slen = s.length();
			for (int k = 0;k < slen;k++)if (s[k] == '9') {
				row[i]++;
				col[j]++;
				sum++;
			}
		}
	}
	for (int i = 0;i < N;i++) if (row[i] > max)max = row[i];
	for (int i = 0;i < M;i++)if (col[i] > max)max = col[i];
	cout << sum - max;
}