#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;
int arr[1001][1001];
int arr2[1001];
vector<int> v;
queue<int> q;
int L, M, N;
void DFS(int n) {
    int a;
    arr2[n] = 1;
    v.push_back(n);
    for (a = 1; a < L+1; a++) {
        if (arr[n][a] && !arr2[a]) DFS(a);
    }
}
void BFS(int n) {
    int a;
    if (!arr2[n]) {
        arr2[n] = 1;
        v.push_back(n);
        for (a = 0; a < L+1; a++) {
            if (arr[n][a] && !arr2[a]) {
                q.push(a);
            }
        }
    }
    if (!q.empty()) {
        a = q.front();
        q.pop();
        BFS(a);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a,b,c;
    cin >> L >> M >> N;
    for (a = 0; a < M; a++) {
        cin >> b >> c;
        arr[b][c] = 1;
        arr[c][b] = 1;
    }
    DFS(N);
    for (int k : v) cout << k << " ";
    cout << "\n";
    v.clear();
    memset(arr2, 0, sizeof(arr2));
    BFS(N);
    for (int k : v) cout << k << " ";
}