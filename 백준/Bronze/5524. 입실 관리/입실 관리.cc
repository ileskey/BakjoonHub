#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a, b, N, M;
    cin >> N;
    string s;
    for (a = 0; a < N; a++) {
        cin >> s;
        M = s.size();
        for (b = 0; b < M; b++) {
            if (s.at(b) <= 'Z') s.at(b) += 32;
        }
        cout << s<<"\n";
    }
}