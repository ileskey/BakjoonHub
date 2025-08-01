#include<iostream>
using namespace std;
int main() {
	int T, N;
	int arr[2][2] = {};
	double tmp, max, D;
	cout << fixed;
	cout.precision(6);
	cin >> T;
	for (int t = 0; t < T; t++) {
		max = 0;
		cin >> D >> N;
		for (int i = 0; i < N; i++) {
			cin >> arr[i][0] >> arr[i][1];
			tmp = (D - arr[i][0]) / arr[i][1];
			if (max < tmp)max = tmp;
		}
		cout << "Case #" << t + 1 << ": " << D / max << "\n";
	}
}