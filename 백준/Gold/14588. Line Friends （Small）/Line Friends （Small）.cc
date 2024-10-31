#include<iostream>
#include<vector>
using namespace std;
int arr[301][301];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, l, r;
	vector<pair<int, int>>v;
	cin >> N;
	N++;
	for (int i = 1; i < N; i++)for (int j = 1; j < N; j++)arr[i][j] = 512;
	for (int i = 1; i < N; i++) {
		cin >> l >> r;
		for (int j = 1; j < i; j++) {
			if (r<v[j-1].first || l>v[j-1].second) continue;
			arr[i][j] = 1;
			arr[j][i] = 1;
		}
		v.push_back(make_pair(l, r));
	}
	for (int i = 1; i < N; i++)for (int j = 1; j < N; j++)for (int k = 1; k < N; k++) if (arr[j][k] > arr[j][i] + arr[i][k]) arr[j][k] = arr[j][i] + arr[i][k];
	cin >> N;
	while (N--) {
		cin >> l >> r;
		if (arr[l][r] == 512) cout << "-1\n";
		else cout << arr[l][r] << "\n";
	}
}