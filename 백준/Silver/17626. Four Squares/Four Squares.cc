#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> v;
	int arr[50001] = { 0, };
	for (int i = 1; i * i < 50000; i++) {
		v.push_back(i * i);
	}
	int n, m = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		arr[i] = 50000;
		for (int j : v) {
			if (j > i) break;
			if (1 + arr[i - j] < arr[i])arr[i] = 1 + arr[i - j];
		}
	}
	cout << arr[n];
}