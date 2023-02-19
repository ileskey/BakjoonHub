#include<iostream>
#include<queue>
using namespace std;
int main() {
    int K, N, c = 1;
    cin >> N >> K;
    queue<int> q1;
    queue<int> q2;
    while (c <= N) {
        q1.push(c++);
    }
    c = 0;
    while (c < N) {
        for (int a = 1; a < K; a++) {
            q1.push(q1.front());
            q1.pop();
        }
        q2.push(q1.front());
        q1.pop();
        c++;
    }
    cout << '<';
    while (c > 1) {
        cout << q2.front() << ", ";
        q2.pop();
        c--;
    }
    cout << q2.front() << '>';
    q2.pop();
}