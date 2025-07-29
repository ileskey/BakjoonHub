#include<iostream>
using namespace std;
int arr[100][100];
int main() {
	int N, t;
	cin >> N;
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < N;j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 0)arr[i][j] = 10000;
		}
	}
	for (int k = 0;k < N;k++) {
		for (int i = 0;i < N;i++) {
			for (int j = 0;j < N;j++) {
				t = arr[i][k] + arr[k][j];
				if (t < arr[i][j])arr[i][j] = 1;
			}
		}
	}
	for (int i = 0;i < N;i++){
		for (int j = 0;j < N;j++) {
			if (arr[i][j] == 10000)arr[i][j] = 0;
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
}