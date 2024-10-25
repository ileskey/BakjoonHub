#include<iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, arr[50][3] = { 0, };
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i][0] >> arr[i][1];
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i == j)continue;
			if (arr[i][0] > arr[j][0] && arr[i][1] > arr[j][1])arr[j][2]++;
		}
	}
	for (int i = 0; i < N; i++) {
		cout << arr[i][2] + 1<<" ";
	}
}