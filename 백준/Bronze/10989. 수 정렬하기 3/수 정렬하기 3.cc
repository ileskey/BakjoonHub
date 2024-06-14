#include<iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int arr[10001] = {};
	int N, k, i;
	cin >> N;
	for (i = 0; i < N; i++) {
		cin >> k;
		arr[k]++;
	}
	for (i = 1; i < 10001; i++) {
		N = arr[i];
		for(k=0;k<N;k++)
		cout << i << "\n";
	}
}