#include<iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, a;
    cin >> N;
    int arr[1000] = { 1,3, };
    for (a = 2; a < N; a++) {
        arr[a] = arr[a - 1] + 2*arr[a - 2];
        arr[a] %= 10007;
    }
    cout << arr[N - 1];
}