#include<iostream>
using namespace std;
int N, cnt, arr[100001];
void push(int x) {
	arr[++cnt] = x;
	int t = cnt, tmp;
	while (t > 1) {
		if (arr[t] < arr[t / 2]) return;
		tmp = arr[t];
		arr[t] = arr[t / 2];
		arr[t / 2] = tmp;
		t /= 2;
	}
}
void pop() {
	if (!cnt) {
		cout << "0\n";
		return;
	}
	cout << arr[1] << "\n";
	arr[1] = arr[cnt--];
	int t = 1, t2 = 2, tmp, lr = 0;
	while (t2 <= cnt) {
		if (arr[t2] < arr[t2 + 1])t2++;
		if (arr[t] < arr[t2]) {
			tmp = arr[t];
			arr[t] = arr[t2];
			arr[t2] = tmp;
			t = t2;
			t2 = t * 2;
		}
		else break;
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int x;
	cin >> N;
	while (N--) {
		cin >> x;
		if (x) push(x);
		else pop();
	}
}