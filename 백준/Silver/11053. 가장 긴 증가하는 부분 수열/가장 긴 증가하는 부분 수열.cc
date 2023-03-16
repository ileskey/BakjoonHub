#include<iostream>
using namespace std;
int main() {
	int N,a,b=0;
	cin >> N;
	int* arr = new int[N];
	for (a = 0; a < N; a++)cin >> arr[a];
	int* arr2 = new int[N+1] {};
	for (a = 0; a < N; a++) {
		arr[a];
		int left = 0, right = b;
		while (left <= right) {
			if (arr[a] > arr2[right]) {
				arr2[++b] = arr[a];
				break;
			}
			int mid = (left + right) / 2;
			if (arr[a] > arr2[mid]) left = mid+1;
			else if (arr[a] < arr2[mid]) {
				if (mid == 0) {
					arr2[0] = arr[a];
					break;
				}
				if (arr[a] > arr2[mid - 1]) {
					arr2[mid] = arr[a];
					break;
				}
				else right = mid-1;
			}
			else break;
		}
	}
	cout << b;
}