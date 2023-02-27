#include<iostream>
#include<vector>
#include<algorithm>
#define pa pair<int, int>
using namespace std;
vector<int>* v;
int* arr;
int* arr2;
void func(int k) {
    int a = v[k].size(), b;
    for(int b:v[k]) {
        if (!arr2[b]) {
            arr[b] = 1;
            arr2[b] = 1;
            func(b);
        }
        
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, a, b, c, d;
    cin >> N >> M;
    v = new vector<int>[N + 1];
    arr = new int[N + 1] {0, };
    arr2 = new int[N + 1] {0, };
    arr[1] = 1;
    for (a = 0; a < M; a++) {
        cin >> b >> c;
        v[c].push_back(b);
        v[b].push_back(c);
    }
    arr2[1] = 1;
    func(1);
    b = 0;
    for (a = 2; a <= N; a++) b += arr[a];
    cout << b;
}