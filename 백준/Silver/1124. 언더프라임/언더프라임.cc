#include<iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int A, B, i, j, n = 0, k, temp;
	cin >> A >> B;
	int arr[100001] = { 1, 1, };
	int arr2[100001] = { 0, };
	for (i = 2; i <= B; i++) {
		if (arr[i] == 0) {
			for (j = i + i; j <= B; j += i) {
				arr[j] = 1;
				temp = j;
				while (temp % i == 0) {
					temp /= i;
					arr2[j]++;
				}
			}
		}
	}
	for (i = A; i <= B; i++) {
		if (arr[i] && !arr[arr2[i]])n++;
	}
	cout << n << "\n";
}