#include<iostream>
#include<vector>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long int A, B, i, j, n = 0, k, temp, ite, vsize;
	vector<int> v;
	cin >> A >> B;
	long long int arr[50001] = { 0, };
	for (i = 2; i < 50001; i++) {
		if (arr[i] == 0) {
			v.push_back(i);
			for (j = i * i; j < 50001; j += i) {
				arr[j] = 1;
			}
		}
	}
	vsize = v.size();
	for (i = A; i <= B; i++) {
		k = 0;
		ite = 0;
		temp = i;
		while (temp != 1) {
			if (ite == vsize && temp > 50000) {
				k++;
				break;
			}
			if (temp % v[ite] == 0) {
				k++;
				temp /= v[ite];
			}
			else ite++;
		}
		for (ite = 0; ite < vsize; ite++) {
			if (k == v[ite]) { n++; break; }
		}
	}
	cout << n;
}