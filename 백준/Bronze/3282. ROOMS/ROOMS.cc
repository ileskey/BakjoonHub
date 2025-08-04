#include<iostream>
#include<vector>
using namespace std;
int main() {
	int N, G, arr[100] = {}, a, b, t = 0, vi=0;
	vector<int> v;
	cin >> N>>G;
	for (int i = 0; i < G; i++) {
		cin >> a;
		b = a / 2;
		while (t < N && b>0) {
			arr[t++] = 2;
			b--;
		}
		b *= 2;
		while (t == N&&b--) arr[v[vi++]]++;
		if (a % 2) {
			if (t < N) {
				arr[t] = 1;
				v.push_back(t++);
			}
			else arr[v[vi++]]++;
		}
	}
	for (int i = 0; i < N; i++)cout << arr[i] << "\n";
}