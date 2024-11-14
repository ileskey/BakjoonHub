#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int N, l, r, tmp, min, min_l, min_r, is_negative, arr[100000] = {};
	cin >> N;
	for (int i = 0; i < N; i++) cin >> arr[i];
	sort(arr, arr + N);
	min = 2147483647, l = 0, r = N - 1;
	if (min < 0) min *= -1;
	while (l < r) {
		is_negative = 0;
		tmp = arr[l] + arr[r];
		if (tmp == 0) { cout << arr[l] << " " << arr[r]; return 0; }
		else if (tmp < 0) {
			tmp *= -1;
			is_negative = 1;
		}
		if (tmp < min) {
			min_l = arr[l];
			min_r = arr[r];
			min = tmp;
		}
		if (is_negative) l++;
		else r--;
	}
	cout << min_l << " " << min_r;
}