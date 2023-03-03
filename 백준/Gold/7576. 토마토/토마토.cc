#include<iostream>
#include<queue>
#include<tuple>
using namespace std;
int Y, X, maximum;
short** state;
bool** is_used;
queue<pair<int, int>> q;
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };
int start() {
    int y, x;
    for (y = 0; y < Y; y++) {
        for (x = 0; x < X; x++) {
            if (state[y][x] == 1) {
                q.push(make_pair(y, x));
                is_used[y][x] = true;
            }
            else if (state[y][x] == -1) is_used[y][x] = true;
        }
    }
    int c = 0;
    while (q.size() > 0) {
        c++;
        int a, b, i, fx, fy;
        i = q.size();
        for (a = 0; a < i; a++) {
            int ny = q.front().first,
                nx = q.front().second;
            q.pop();
            for (b = 0; b < 4; b++) {
                fx = nx + dx[b];
                fy = ny + dy[b];
                if (fx >= 0 && fx < X && fy >= 0 && fy < Y && !is_used[fy][fx]) {
                    if (state[fy][fx]==0) {
                        state[fy][fx] = 1;
                        q.push(make_pair(fy, fx));
                        is_used[fy][fx] = true;
                    }
                }
            }
        }
    }
    for (y = 0; y < Y; y++) {
        for (x = 0; x < X; x++) {
            if (state[y][x] == 0) {
                cout << -1;
                return 0;
            }
        }
    }
    cout << c - 1;
    return 1;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int y, x, d;
    cin >> X >> Y;
    state = new short* [Y];
    is_used = new bool* [Y];
    for (y = 0; y < Y; y++) {
        state[y] = new short[X];
        is_used[y] = new bool[X] {0, };
        for (x = 0; x < X; x++) {
            cin >> d;
            state[y][x] = d;
        }
    }
    start();
}