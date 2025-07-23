#include<iostream>
using namespace std;
int main() {
	int N, size_s, j, k, f;
	char arr[20][101] = {};
	string s;
	while (1) {
		cin >> N;
		if (N == 0)break;
		cin >> s;
		size_s = s.size();
		j = 0;
		k = 0;
		f = 1;
		for (int i = 0;i < size_s;i++) {
			arr[k][j] = s[i];
			if (f == 1) {
				if (k == N - 1) {
					f = 0;
					j++;
				}
				else k++;
			}
			else {
				if (k == 0) {
					f = 1;
					j++;
				}
				else k--;
			}
		}
		for (int i = 0;i < N;i++) {
			arr[i][j] = 0;
			cout << arr[i];
		}
		cout << "\n";
	}
}