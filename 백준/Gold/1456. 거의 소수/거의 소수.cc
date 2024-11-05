#include<iostream>
#include<vector>
using namespace std;
int arr[10000000];
vector<long long> v;
int main() {
    long long t, t2, a, b, c = 0;
    for (long long i = 2; i < 10000000; i++) {
        if (arr[i]) continue;
        for (long long j = i * i; j < 10000000; j += i) {
            arr[j] = 1;
        }
        v.push_back(i);
    }
    cin >> a >> b;
    for (long long l : v) {
        t = l * l;
        if (b < t) break;
        while (t <= b) {
            if (t >= a) c++;
            if (t > b / l)break;
            t *= l;
        }
    }
    cout << c;
}