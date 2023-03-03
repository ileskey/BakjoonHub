#include<iostream>
#include<queue>
#include<tuple>
using namespace std;
int X, Y, s1X, s1Y, s2X, s2Y;
string* state;
int** parent;
bool** is_used;
queue<pair<int, int>> q;
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };
int mfind(int n) {
    if (n == parent[n / 10000][n % 10000]) return n;
    return parent[n / 10000][n % 10000] = mfind(parent[n / 10000][n % 10000]);
}
void munion(int n, int m) {
    n = mfind(n);
    m = mfind(m);
    if (n > m) parent[n / 10000][n % 10000] = m;
    else parent[m / 10000][m % 10000] = n;
}
int start() {
    int y, x;
    q.push({ s1Y, s1X });
    q.push({ s2Y,s2X });
    while (q.size() > 0) {
        int a, b, i, fx, fy, nx, ny;
        i = q.size();
        for (a = 0; a < i; a++) {
            ny = q.front().first;
            nx = q.front().second;
            q.pop();
            for (b = 0; b < 4; b++) {
                fx = nx + dx[b];
                fy = ny + dy[b];
                if (fx >= 0 && fx < X && fy >= 0 && fy < Y && !is_used[fy][fx]) {
                    if (state[fy][fx] == '.') {
                        parent[fy][fx] = parent[ny][nx];
                        q.push({ fy, fx });
                        is_used[fy][fx] = true;
                    }
                }
            }
            for (b = 0; b < 4; b++) {
                fx = nx + dx[b];
                fy = ny + dy[b];
                if (fx >= 0 && fx < X && fy >= 0 && fy < Y && is_used[fy][fx])
                    if ((mfind(fy * 10000 + fx) == mfind(s1Y * 10000 + s1X) && mfind(ny * 10000 + nx) == mfind(s2Y * 10000 + s2X)) ||
                        (mfind(ny * 10000 + nx) == mfind(s1Y * 10000 + s1X) && mfind(fy * 10000 + fx) == mfind(s2Y * 10000 + s2X))) return 0;
            }
        }
    }
    for (y = 0; y < Y; y++) for (x = 0; x < X; x++) { is_used[y][x] = false; }
    for (y = 0; y < Y; y++) {
        for (x = 0; x < X; x++) {
            if ((state[y][x] == '.' || state[y][x] == 'L')) {
                if (parent[y][x] == -1)parent[y][x] = y * 10000 + x;
                q.push({ y, x });
                is_used[y][x] = true;
            }
        }
    }
    int c = 0;
    while (q.size() > 0) {
        if (mfind(s1Y * 10000 + s1X) == mfind(s2Y * 10000 + s2X)) return c;
        c++;
        int a, b, c, i, fx, fy, nx, ny, xx, yy;
        i = q.size();
        for (a = 0; a < i; a++) {
            ny = q.front().first;
            nx = q.front().second;
            q.pop();
            for (b = 0; b < 4; b++) {
                fx = nx + dx[b];
                fy = ny + dy[b];
            }
            for (b = 0; b < 4; b++) {
                fx = nx + dx[b];
                fy = ny + dy[b];
                if (fx >= 0 && fx < X && fy >= 0 && fy < Y) {
                    if (!is_used[fy][fx] && state[fy][fx] == 'X') {
                        parent[fy][fx] = parent[ny][nx];
                        state[fy][fx] = '.';
                        q.push({ fy, fx });
                        is_used[fy][fx] = true;
                        for (c = 0; c < 4; c++) {
                            xx = fx + dx[c];
                            yy = fy + dy[c];
                            if (!(xx >= 0 && xx < X && yy >= 0 && yy < Y))continue;
                            if (state[yy][xx] == '.'||state[yy][xx]=='L') munion(fy * 10000 + fx, yy * 10000 + xx);
                        }
                    }
                }
            }
        }
    }
    return -1;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x, y, d, a;
    cin >> Y >> X;
    state = new string[Y];
    parent = new int* [Y];
    is_used = new bool* [Y];
    int cnt = 0;
    for (y = 0; y < Y; y++) {
        parent[y] = new int[X];
        is_used[y] = new bool[X] {0, };
        cin >> state[y];
        for (x = 0; x < X; x++) {
            parent[y][x] = -1;
            if (state[y][x] == 'L') {
                if (cnt == 0) {
                    s1X = x;
                    s1Y = y;
                    parent[y][x] = y * 10000 + x;
                    cnt++;
                }
                else {
                    s2X = x;
                    s2Y = y;
                    parent[y][x] = y * 10000 + x;
                    for (a = 0; a < 4; a++) {
                        if (s1X + dx[a] == x && s1Y + dy[a] == y) { cout << 0; return 0; }
                    }
                }
            }
        }
    }
    cout << start();
}