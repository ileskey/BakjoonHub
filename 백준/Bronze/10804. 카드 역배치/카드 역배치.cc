#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[21];
    int a, b, c, d;
    for (a = 1; a < 21; a++) arr[a] = a;
    for (a = 0; a < 10; a++) {
        cin >> b >> c;
        while (b < c) {
            d = arr[b];
            arr[b++] = arr[c];
            arr[c--] = d;
        }
    }
    for (a = 1; a < 21; a++) cout << arr[a] << " ";
}