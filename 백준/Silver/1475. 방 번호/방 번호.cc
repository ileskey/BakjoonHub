#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a,b=0;
    int z[10] = { 0, };
    cin >> a;
    while (a > 0) {
        z[a % 10]++;
        a /= 10;
    }
    z[6] += z[9];
    z[6] = z[6] / 2 + z[6] % 2;
    for (a = 0; a < 9; a++) if (z[a] > b) b = z[a];
    cout << b;
}