#include<iostream>
using namespace std;
int main() {
    int a, b, c, d,e,f,g;
    cin >> a >> b;
    c = a / 4;
    d = b / 4;
    e = a % 4;
    f = b % 4;
    if (e == 0) { c--; e = 4; }
    if (f == 0) { d--; f = 4; }
    a = c - d;
    if (a < 0)a *= -1;
    b = e - f;
    if (b < 0)b *= -1;
    cout << a + b;
}