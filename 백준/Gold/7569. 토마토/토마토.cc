#include<iostream>
#include<queue>
#include<tuple>
using namespace std;
int X, Y, Z, maximum;
short ***state;
bool*** is_used;
queue<tuple<int, int, int>> q;
int dx[6] = { -1,1,0,0,0,0 };
int dy[6] = { 0,0,-1,1,0,0 };
int dz[6] = { 0,0,0,0,-1,1 };
int start() {
    int z, y, x;
    for (z = 0; z < Z; z++) {
        for (y = 0; y < Y; y++) {
            for (x = 0; x < X; x++) {
                if (state[z][y][x] == 1) {
                    q.push(make_tuple(z, y, x));
                    is_used[z][y][x] = true;
                }
                else if (state[z][y][x] == -1) is_used[z][y][x] = true;
            }
        }
    }
    int c = 0;
    while (q.size() > 0) {
        c++;
        int a,b,i, fx, fy, fz;
        i = q.size();
        for (a = 0; a < i; a++) {
            int nz = get<0>(q.front()),
                ny = get<1>(q.front()),
                nx = get<2>(q.front());
            q.pop();
            for (b = 0; b < 6; b++) {
                fx = nx + dx[b];
                fy = ny + dy[b];
                fz = nz + dz[b];
                if (fx >= 0 && fx < X && fy >= 0 && fy < Y && fz >= 0 && fz < Z && !is_used[fz][fy][fx]) {
                    if (!state[fz][fy][fx]) {
                        state[fz][fy][fx] = 1;
                        q.push(make_tuple(fz, fy, fx));
                        is_used[fz][fy][fx] = true;
                    }
                }
            }
        }
    }
    for (z = 0; z < Z; z++) {
        for (y = 0; y < Y; y++) {
            for (x = 0; x < X; x++) {
                if (state[z][y][x] == 0) {
                    cout << -1;
                    return 0;
                }
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
    int z, y, x, d;
    cin >> X >> Y >> Z;
    state = new short** [Z];
    is_used = new bool** [Z];
    for (z = 0; z < Z; z++) {
        state[z] = new short* [Y];
        is_used[z] = new bool* [Y];
        for (y = 0; y < Y; y++) {
            state[z][y] = new short[X];
            is_used[z][y] = new bool[X] {0, };
            for (x = 0; x < X; x++) {
                cin >> d;
                state[z][y][x] = d;
            }
        }
    }
    start();
}