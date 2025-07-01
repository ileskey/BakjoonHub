#include<iostream>
using namespace std;
int N, tang[200001][2] = {};
int main() {
	int i, t = 1, k = 0, f1, f2, max = 0, len = 0;
	cin >> N >> f1;
	for (i = 1;i < N;i++) {
		cin >> f2;
		if (f1 == f2) {
			t++;
			continue;
		}
		tang[k][0] = t;
		tang[k++][1] = f1;
		f1 = f2;
		t = 1;
	}
	tang[k][0] = t;
	tang[k++][1] = f1;
	i = 0;
	if (k == 1) {
		cout << t;
		return 0;
	}
	while (i < k - 1) {
		len = 0;
		len += tang[i][0];
		f1 = tang[i++][1];
		len += tang[i][0];
		f2 = tang[i++][1];
		while (tang[i][1] == f1 || tang[i][1] == f2) {
			len += tang[i][0];
			i++;
		}
		if (len > max)max = len;
		i--;

	}
	cout << max;
}