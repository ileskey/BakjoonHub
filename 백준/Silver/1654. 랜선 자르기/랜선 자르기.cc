#include<iostream>
#include<algorithm>
using namespace std;
using ll = long long ;
int main(void) {
    int K, N;
    ll start = 0, ans = 0, end = 0;
    cin >> K >> N;
    ll* arr = new ll[K];
    for (int a = 0; a < K; a++) {
        cin >> arr[a];
        end = max(end, arr[a]);
    }
    while (start <= end) {
        int sum = 0;
        ll mid = (start + end) / 2;
        if (mid == 0)mid = 1;
        for (int b = 0; b < K; b++)
            sum += arr[b] / mid;
        if (sum >= N) {
            ans = max(mid,ans);
            start = mid + 1;
        }
        else
            end = mid-1;
    }
    cout << ans;
    delete arr;
    return 0;
}