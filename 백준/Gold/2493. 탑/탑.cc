#include<iostream>
#include<stack>
using namespace std;
int arr[500000];
int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int N,a,H,num1,num2;
    stack<pair<int, int>> sta;
    cin >> N;
    for (a = 0; a < N; a++) {
        cin >> H;
        while (!sta.empty()) {
            num1 = sta.top().first;
            num2 = sta.top().second;
            if (H <= num1) {
                arr[a] = num2+1;
                break;
            }
            else sta.pop();
        }
        sta.push({ H,a });
    }
    for (a = 0; a < N; a++) {
        cout << arr[a]<<" ";
    }
}