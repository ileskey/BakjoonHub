#include<iostream>
#include<vector>
using namespace std;
int main() {
    int a, b, i, j, arr[119] = { 0, }, brr[119] = { 0, };
    vector<int> v;
    for (i = 2; i < 119; i++) {
        if (arr[i] == 0) {
            v.push_back(i);
            for (j = i * i; j < 119; j += i) arr[j] = 1;
        }
    }

    a = v.size();
    for (i = 0; i < a; i++) {
        for (j = i; j < a; j++) {
            if (v[i] + v[j] < 119)brr[v[i] + v[j]] = 1;
        }
    }
    cin >> a;
    while (a--) {
        cin >> b;
        if (brr[b]) cout << "Yes\n";
        else cout << "No\n";
    }
}