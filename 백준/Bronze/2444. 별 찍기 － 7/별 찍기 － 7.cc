#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a,b,c;
    cin >> a;
    for (b = 1; b <= a; b++) {
        for (c = a - b; c > 0; c--) cout << " ";
        for (c = 1; c < b; c++) cout << "**";
        cout << "*\n";
    }
    for (b = 2; b <= a; b++) {
        for (c = 1; c < b; c++) cout << " ";
        for (c = a - b; c > 0; c--) cout << "**";
        cout << "*\n";
    }
}