#include<iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int L, N, M, a, b,sum=0,flag;
    string S, s="I";
    cin >> N >> M >> S;
    L = M - 2 * N - 1;
    for (a = 0; a < N; a++) s += "OI";
    for (a = 0; a <= L; a++) {
        flag = 1;
        for (b = a; b <= a + 2 * N; b++) {
            if (S.at(b) != s.at(b-a)) {
                flag = 0;
                break;
            }
        }
        if (flag) sum++;
    }
    cout << sum;
}