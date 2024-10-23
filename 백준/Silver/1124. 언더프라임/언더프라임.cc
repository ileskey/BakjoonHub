#include<iostream>
#include<vector>
using namespace std;
int main() {
	long long int A, B, i, j, n = 0, k, temp, ite;
	vector<int> v;
	cin >> A >> B;
	long long int arr[100001] = { 0, };
	for (i = 2; i <= B; i++) {
		if (arr[i] == 0) {
			v.push_back(i);
			for (j = i * i; j < 100001; j += i) {
				arr[j] = 1;
			}
		}
	}
	for (i = A; i <= B; i++) {
		k = 0;
		ite = 0;
		temp = i;
		while (temp != 1) {
			if (temp % v[ite] == 0) {
				k++;
				temp /= v[ite];
			}
			else ite++;
		}
		temp = v.size();
		for (ite = 0; ite < temp; ite++) {
			if (k == v[ite]) { n++; break; }
		}
	}
	cout << n;
}