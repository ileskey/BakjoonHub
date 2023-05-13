#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int a, b, c, d, e, f;
    double D;
    cin >> a >> b >> c >> d >> e;
    a = d - a;
    b *= -1;
    c *= -1;
    D = b * b - 4 * a * c;
    if (a < 0) f = 0;
    else if (a == 0) {
        if (b < 0) f = 0;
        else if (b * e + c >= 0) f = 1;
        else f = 0;
    }
    else {
        if (D <= 0) f = 1;
        else {
            D = sqrt(D);
            if (e >= (-b + D) / (2 * a)) f = 1;
            else f = 0;
        }
    }
    cout << f;
}