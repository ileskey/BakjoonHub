#include<iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a;
    while (a--) {
        c = 0;
        cin >> b;
        while (b > 0) {
            if (b % 2) cout << c << " ";
            b /= 2;
            c++;
        }
        cout << "\n";
    }
}