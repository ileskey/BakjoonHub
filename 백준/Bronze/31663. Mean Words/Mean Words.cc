#include<iostream>
#include<string>
using namespace std;
int main() {
	string arr[1000];
	int sum[45] = {};
	int cnt[45] = {};
	int N, l;
	cin >> N;
	for (int i = 0;i< N; i++) {
		cin >> arr[i];
		l = arr[i].length();
		for (int j = 0; j < l; j++) {
			cnt[j]++;
			sum[j] += arr[i][j];
		}
	}
	for (int i = 0; i < 45; i++) {
		if (cnt[i] == 0)break;
		cout<< (char)(sum[i] / cnt[i]);
	}
}