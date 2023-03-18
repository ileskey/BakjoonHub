#include<iostream>
using namespace std;
int main() {
    int arr[100][100]{};
    int a, b, c, x, y;
    cin >> x >> y;
    for (a = 0; a < x; a++) for (b = 0; b < y; b++) { cin >> c; arr[a][b] += c; }
    for (a = 0; a < x; a++) for (b = 0; b < y; b++) { cin >> c; arr[a][b] += c; }
    for (a = 0; a < x; a++) {
        for (b = 0; b < y; b++)cout << arr[a][b] << " ";
        cout << "\n";
    }
}