#include<iostream>
using namespace std;
int main() {
	int N, X, Y, Z = 0, arr[100];
	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> arr[i];
	}
	cin >> X >> Y;
	X = N * X / 100;
	for (int i = 0;i < N;i++) {
		if (arr[i] >= Y)Z++;
	}
	cout << X << " " << Z;
}