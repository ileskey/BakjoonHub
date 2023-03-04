#include<iostream>
using namespace std;
int main() {
	int N, max = 5,a;
	cin >> N;
	long long arr[101] = { 0,1,1,1,2,2 };
	while (N--) {
		cin >> a;
		if (a <= max)cout << arr[a]<<"\n";
		else {
			for (int b = max + 1; b <= a; b++)
				arr[b] = arr[b - 1] + arr[b - 5];
			max = a;
			cout << arr[a]<<"\n";
		}
	}
}