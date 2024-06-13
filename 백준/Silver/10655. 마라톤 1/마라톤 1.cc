#include<iostream>
using namespace std;
int arr[100000][2];
long long dist_x[100000];
long long dist_y[100000];
int main() {
	int N;
	long long distance=0, temp_x, temp_y, distance_cheat, shortest=9223372036854775807;
	cin >> N;
	cin >> arr[0][0] >> arr[0][1];
	for (int i = 1; i < N; i++) {
		cin >> arr[i][0] >> arr[i][1];
		dist_x[i] = arr[i][0] - arr[i-1][0];
		if (dist_x[i] < 0) dist_x[i] *= -1;
		dist_y[i] = arr[i][1] - arr[i - 1][1];
		if (dist_y[i] < 0) dist_y[i] *= -1;
		distance += (dist_x[i] + dist_y[i]);
	}
	for (int i = 1; i < N - 1; i++) {
		// dist - (1 - 0) - (2 - 1) + (2 - 0)
		distance_cheat = distance - dist_x[i] - dist_x[i + 1] - dist_y[i] - dist_y[i + 1];
		temp_x = arr[i+1][0] - arr[i - 1][0];
		if (temp_x < 0)temp_x *= -1;
		temp_y = arr[i + 1][1] - arr[i - 1][1];
		if (temp_y < 0)temp_y *= -1; 
		distance_cheat += (temp_x + temp_y);
		if (distance_cheat < shortest)shortest = distance_cheat;
	}
	cout << shortest;
}