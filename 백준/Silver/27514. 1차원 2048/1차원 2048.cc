#include<iostream>
using namespace std;
int func(long long n) {
    int a = 0;
    while (n > 1) {
        n /= 2;
        a++;
    }
    return a;
}
int main() {
    long long a, N, b = 1, c;
    cin >> N;
    int arr[63] = { 0, };
    while (N--) {
        cin >> a;
        if(a) arr[func(a)]++;
    }
    for (a = 0; a < 62; a++) {
        if (arr[a] / 2 > 0)arr[a + 1] += (arr[a] / 2);
    }
    for (a = 62; a >= 0; a--) {
        if (arr[a]) {
            c = a;
            while (c--) b *= 2;
            break;
        }
    }
    cout<< b;
}