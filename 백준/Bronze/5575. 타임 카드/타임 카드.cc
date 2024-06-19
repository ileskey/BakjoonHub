#include<iostream>
using namespace std;
int main() {
    int a, b, c, d, e, f, g;
    g = 3;
    while (g--) {
        cin >> a >> b >> c >> d >> e >> f;
        f -= c;
        if (f < 0) {
            e--;
            f += 60;
        }
        e -= b;
        if (e < 0) {
            d--;
            e += 60;
        }
        d -= a;
        cout << d << " " << e << " " << f << "\n";
    }
}