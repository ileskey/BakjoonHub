#include<iostream>
#include<queue>
using namespace std;
int arr[2][1001];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, M, t, a, b, qsize;
    queue <pair< int, int >> q;
    queue<int> ans;
    cin >> N >> M;
    for (int i = 0;i < M;i++) {
        cin >> t >> a;
        for (int j = 1;j < t;j++) {
            cin >> b;
            q.push({ a, b });
            arr[0][b]++;
            a = b;
        }
    }
    while (!q.empty()) {
        t = -1;
        for (int i = 1;i <= N;i++) {
            if (arr[0][i] == 0 && arr[1][i] == 0) {
                t = i;
                break;
            }
        }
        if (t == -1) {
            cout << "0\n";
            return 0;
        }
        arr[1][t] = 1;
        qsize = q.size();
        ans.push(t);
        while (qsize--) {
            a = q.front().first;
            b = q.front().second;
            q.pop();
            if (a != t) {
                q.push({ a,b });
                continue;
            }
            arr[0][b]--;
        }
    }
    for (int i = 1;i <= N;i++) {
        if (arr[1][i] == 0) ans.push(i);
    }
    while (N--) {
        cout << ans.front()<<"\n";
        ans.pop();
    }
}