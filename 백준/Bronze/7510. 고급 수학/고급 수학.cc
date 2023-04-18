#include<algorithm>
#include<iostream>
using namespace std;
int main() {
    long long a, b, c, arr[3];
    cin >> a;
    for (b = 1; b <= a; b++) {
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr + 3);
        cout << "Scenario #" << b << ":\n" << ((arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2]) ? "yes\n\n" : "no\n\n");
    }
}