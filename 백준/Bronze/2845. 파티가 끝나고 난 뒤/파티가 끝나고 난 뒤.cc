#include<iostream>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b;
    c = a * b;
    for (a = 0; a < 5;a++) {
        cin >> d;
        cout << d - c << " ";
    }
}