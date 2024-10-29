#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int arr[9]; //입력받은 수
int arr2[9];//입력에서 중복 필터용
int arr3[9];//순열 생성용
int arr4[9];
int N, M;
vector<int> outv;
int foo(int a) {
	int flag = 1;
	if (a == M) {
		int t = 0;
		for (int i = M - 1; i >= 0; i--) {
			t = t * 10 + arr2[arr4[i]];
		}
		for (int n : outv) { if (n == t) flag = 0; }
		if (flag) outv.push_back(t);
		return 0;
	}
	//recursive..
	for (int i = 1; i <= N; i++) {
		if (!arr3[i]) {
			arr3[i]++;
			arr4[a] = i;
			foo(a + 1);
			arr3[i]--;
		}
	}
	return 0;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> M;
	for (int i = 1; i <= N; i++)cin >> arr[i];
	sort(arr + 1, arr + N + 1);
	for (int i = 1; i <= N; i++) {
		if (arr[i] == arr[i - 1]) arr2[i] = arr2[i - 1];
		else arr2[i] = i;
	}
	foo(0);
	int s = outv.size();
	for (int i = 0; i < s; i++) {
		while (outv[i] > 0) {
			cout << arr[outv[i] % 10] << " ";
			outv[i] /= 10;
		}
		cout << "\n";
	}
}