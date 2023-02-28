#include<iostream>
#include<cstring>
using namespace std;
int X, Y, Z;
int arr[50][50]{ 0, };
void func(int a, int b) {
    arr[a][b] = 0;
    if (a > 0 && arr[a - 1][b])func(a - 1, b);
    if (a < X - 1 && arr[a + 1][b])func(a + 1, b);
    if (b > 0 && arr[a][b - 1])func(a, b - 1);
    if (b < Y - 1 && arr[a][b + 1])func(a, b + 1);
}
void start() {
    int a, b, t = 0;
    for (a = 0; a < X; a++) {
        for (b = 0; b < Y; b++) {
            if (arr[a][b]) { func(a, b); t++; }
        }
    }
    cout << t << "\n";
    memset(arr, 0, sizeof(arr));
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, a, b, c, d;
    cin >> N;
    for (a = 0; a < N; a++) {
        cin >> X >> Y >> Z;
        for (b = 0; b < Z; b++) {
            cin >> c >> d;
            arr[c][d] = 1;
        }
        start();
    }
}