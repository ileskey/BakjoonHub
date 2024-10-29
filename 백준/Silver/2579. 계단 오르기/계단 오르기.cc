#include<iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    int arr[301] = { 0, };
    int point[2][301] = { 0, };
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
    }
    point[0][1] = arr[1];
    point[0][2] = arr[1] + arr[2];
    point[1][2] = arr[2];
    for (int i = 3; i <= N; i++) {
        point[0][i] = point[1][i - 1] + arr[i];
        point[1][i] = (point[1][i - 2] > point[0][i - 2] ? point[1][i - 2] : point[0][i - 2]) + arr[i];
    }
    cout << (point[0][N] > point[1][N] ? point[0][N] : point[1][N]);
}